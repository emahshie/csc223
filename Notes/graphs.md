# 13.1: Introduction
- A graph is a collection of vertices and edges that connect the vertices
- Graphs are used to model an situation where things are related to each oteher in pairs (ie family trees or transportation networks)
- A graph G is defined as an ordered set (V,E) where V(G) represents the set of vertices and E(G) represents the edges that connect these vertices

![Example](/Screenshot%202026-03-17%20at%208.19.01 AM.png)

This graph has V(G)={A, B, C, D, E} and E(G)={{A, B}, {B, C}, {A, D}, {B, D}, {D, E}, {C, E}}

- Undirected graph: edges to no have any direction associated with them
- Directed graph: edges form an ordered pair and can only be traversed in one direction

# 13.2: Graph Terminology
- Adjacent nodes/neighbors: vertices connected by an edge
- Degree of a node: the number of edges containing the node, denoteed deg(u)
- Regular graph: each vertex has the same number of neighbors, regular graph with vertices of degree k is called a k-regular graph
- Path: A path P written as P = {$v_0, v_1, v_2, ..., v_n$}, of length n from a node u to v is defined as a sequence of (n+1) nodes. $u = v_0, v = v_n$
- Closed path: the edge has the same end points, meaning $v_0 = v_n$
- Simple path: all the nodes in the path are distinct, except $v_0$ can equal $v_n$ (that is called a closed simple path)
- Cycle: a path where the first and last vertices are the same
- Simple cycle: a cylce with no repeated edges and vertices except the first and last
- Connected graph: there is a path between any two vertices (there are no isolated nodes)
- Complete graph: all vertices are directly connected, has n(n-1)/2 edges and n vertices
- Clique: a subset of vertices for an undirected graph where every distinct pair is connected by an edge, forming a complete subgraph
- Labelled/weighted graph: every edge is assingmed to some data (labelled), every edge is assigned some weight or length w(e) that is the cost of traversing the edge (weighted)
- Multiple edges: distinct edges which connect the same endpoints
- Loop: an edge that has identical endpoints
- Multi-graph: a graph with mutliple edges and/or loops
- Size of a graph: the total number of edges in it

# 13.3: Directed Graphs
- Every edge has a direction associated with it
- For an edge (u, v),
    - The edge begins at u and terminates at v.
    - u is known as the origin or initial point of e. Correspondingly v is known as the destination or terminal point of e.
    - u is the predecessor of v. Correspondingly, v is the successor of u.
    - Nodes u and v are adjacent to each other.
- Out-degree of a node: outdeg(u), the number of edges that originate at u
- In-degree of a node: indeg(u), the number of edges that terminate at u
- Degree of a node: deg(u) = outdeg(u) + indeg(u)
- Isolated vertex: a vertex with degree zero
- Pendant/leaf vertex: a vertex with degree one
- Cut vertex: a vertex which would disconnect the remaining graph when deleted
- Source: a node with a postive out-degree but a zero in-degree 
- Sink: a node with a postive in-degree but a zero out-degree 
- Reachability: a node is reachable from another node if there is a path connecting them
- Strongly connected directed graph: there exists a path between every pair of nodes in both direction
- Unilaterally connected graph: there exists a graph between every pair of nodes but only in one direction
- Weakly connected digraph: it's connected by ignoring the direction of the edges
- Parallel/multiple edges: distinct edges that connect the same end-points
- Simple directed graph: has no parallel edges but may contain a cycle but cannot have more than one loop at a given node