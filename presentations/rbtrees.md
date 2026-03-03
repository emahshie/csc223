# Overview
-  Invented in 1972 by Rudolf Bayer who called it the ‘symmetric binary B-tree’
- Inserts and removes intelligently to keep the tree balanced and be efficient
- Leaf nodes contain no data
- Properties:
    1. Every node is either red or black
    2. The root node is always black
    3. All leaf nodes are black
    4. Every red node has both the children colored in black
    5. Every simple path from a given node to any of its leaf nodes has an equal number of black nodes
- Because of the constraints, the longest path from the root node to any leaf node is no more than twice as long as the shortest path from the root to any other leaf in the tree, ensuring a roughly balanced tree
    - Explanation: The shortest possible path will have all black nodes, and the longest possible path would alternately have a red and a black node. Since all maximal paths have the same number of black nodes (property 5), no path is more than twice as long as any other path

# Benefits and Applications
- Efficiency: operations (insertion, deletion, etc) are directly proportional to the height of the tree, so the balance allows red-black trees to be efficient in worst-case scenarios
- Run time: the worst-case running time for operations is $Olog(n)$
- Fast modifications: compared to stricter balancing trees like AVL trees, red-black trees require fewer rotations during insertions and deletions, making them faster for data that changes frequently
- Low memory overhead: 
    - AVL trees: need to store the height of the node or a balance factor that typically require 8-32 bits
    - Red-black trees: only need 1 bit to represent Red (0) or Black (1) (you can't always allocate exactly one bit, but this bit can be "hidden" inside of other data, such as the last bit of a pointer)
- Applications: 
    - Used to implement the std::map, std::multimap, std::set, and std::multiset containers in C++ STL 
    - Used for indexing tables to enhance search and retrieval speeds in systems like MySQL and SQLite

# Insertion
- Insertion consists of two parts: the actual insertion and fixing the tree to ensure all properties are maintained

1. Find the correct leaf position and insert a new red node with two black leaf nodes (must be red so we automatically don't violate property 5)
2. Handle immediate exceptions: 
    - If the tree was empty, the new node is the root. Color it black, and insertion is complete
    - If the parent is black, no properties are violated, and insertion is complete
3. If the parent node is also red, you have a violation of property 4
    - Case 1: Uncle is red
        - Change the parent and uncle to black, change the grandparent to red
        - Move the pointer to the grandparent and repeat the check to make sure the grandparent doesn't conflict with its own parent
        - Keep performing recursively until it is fully solved and insertion is complete
    - Case 2: Uncle is black (or null), node is an inner child (right child of a left child or left child of a right child)
        - Rotate the parent to turn it into an outer child and proceed to Case 3
    - Case 3: Uncle is black (or null), node is an outer child (left child of a left child or right child of a right child)
        - Rotate the grandparent in the opposite direction. Then swap the colors of the original parent and the original grandparent
