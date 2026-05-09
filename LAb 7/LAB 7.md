Aim
1.To find the Minimum Spanning Tree (MST) of a weighted graph by growing the tree from a starting vertex.
2.To find the Minimum Spanning Tree (MST) by selecting edges in increasing order of weight without forming cycles.

algorithms

1.Prim’s
 function prim(graph):
    select starting vertex
    mark it as selected

    repeat (n-1) times:
        find minimum edge connecting:
            selected vertex → unselected vertex

        add that edge to MST
        mark new vertex as selected

2.Kruskal’s
  function kruskal(edges):
    sort edges by weight

    initialize parent array (disjoint set)

    for each edge (u, v):
        if find(u) != find(v):
            add edge to MST
            union(u, v)

    Time Complexity

| Algorithm | Technique    | Time Complexity | Space Complexity |
| --------- | ------------ | --------------- | ---------------- |
| Prim’s    | Greedy       | O(V²)           | O(V)             |
| Kruskal   | Greedy + DSU | O(E log E)      | O(V)             |

Use Cases
1. Prim’s
 Network design (LAN, cables)
 Road and railway planning
 Electrical grid design
 Cluster analysis

 2. Kruskal’s
 Network routing
 Designing minimum cost infrastructure
 Image segmentation
 Clustering problems
