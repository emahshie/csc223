# 9.1 : Introduction
- A tree is a recursively defined structure
- Each node is split into two sub nodes, which then have their own sub nodes
- Root node: the topmost node in the tree. If null, the tree is empty
- Sub-trees: the trees branching from the root node
- Leaf node: a node that has no children
- Path: a sequence of consecutive edges
- Ancestor node: any predecessor node on the path from root to that node
- Descendant node: any successor node on any path from the node to a leaf node
- Level number: root is level 0, children of foot are 1, and so on
- Degree: the number of children a node has
- In-degree: the number of edges arriving at that node
- Out-degree: the number of edges leaving that node

# 9.2.3: Binary Trees
- Every node contains a data element, a left pointer which points to the left child and a right pointer which points to the right child (left empty if it's a terminal node)
- Parent: the node pointing to the left child and right child (root is the only node without a parent)
- Sibling: nodes that share the same level and parent
- Similar binary trees: have the same structure
- Copies: have the same structure and the same content
- Edge: the line connecting a node to any of its successors. A binary tree of n nodes has $n-1$ edges because every node except the root node is connected to its parent via an edge
- Depth: the length fo the path from the root to the node (depth of root node is zero)
- Height: the total number of nodes on the deepest path from the root. A binary tree of height h has from $h$ to $h^2-1$ nodes. The height of a binary tree with n nodes is between $log_2(n+1)$ and n
- Complete binary trees: every level except the last is completely filled all nodes appear as far left as possible. Level r can have at most $2^r$ ndoes
- Extended binary tree: each node has either no children or exactly two
- Internal nodes: nodes in an extended tree that have two children
- External nodes: nodes in an extended tree that have no children
Linked representation of binary trees:
```
struct node {
    struct node *left;
    int data;
    struct node *right;
};
```
Also has a pointer root that points to the root element

# 9.2.4: Binary Search Trees
- Also known as an ordered binary tree
- A type of binary tree where the nodes are arranged in an order

# 9.2.5: Expression Trees
- Used to store algebraic experssions
![Example](/Screenshot%202026-02-26%20at%2011.17.26 AM.png)
