Aim
1.To find the minimum cost path from source to destination in a multistage graph.
2.To find the shortest path in an unweighted graph from a source to a destination.
3.To detect whether a cycle exists in an undirected graph.

algorithms

1.multistage
  function multistageGraph(cost, n):
    dist[n-1] = 0

    for i from n-2 to 0:
        dist[i] = infinity
        for j from i+1 to n-1:
            if edge exists:
                dist[i] = min(dist[i], cost[i][j] + dist[j])
                store next node

    reconstruct path from source to destination

2.shortestpath
  function BFS(graph, start, end):
    mark all nodes unvisited
    create queue

    enqueue start node
    mark start visited

    while queue not empty:
        node = dequeue
        for each neighbor:
            if not visited:
                mark visited
                store parent
                enqueue neighbor

    reconstruct path using parent array

3.cycledetect
  function DFS(node, parent):
    mark node as visited

    for each neighbor:
        if not visited:
            if DFS(neighbor, node):
                return true
        else if neighbor != parent:
            return true

    return false

    Time Complexity

| Algorithm             | Technique           | Time Complexity | Space Complexity |
| --------------------- | ------------------- | --------------- | ---------------- |
| Multistage Graph      | Dynamic Programming | O(n²)           | O(n)             |
| BFS Shortest Path     | Graph Traversal     | O(V + E)        | O(V)             |
| Cycle Detection (DFS) | Graph Traversal     | O(V + E)        | O(V)             |

Use Cases

1.multistage
 Network routing with stages
 Decision-making problems
 Pipeline processing
 DAG shortest path problems

2.shortestpath
  Shortest path in unweighted graphs
  Social networks (degrees of separation)
  Web crawling
  Routing problems

3.cycledetect
 Detecting loops in networks
 Deadlock detection
 Graph validation
 Dependency analysis