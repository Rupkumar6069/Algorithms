Aim
To find the shortest paths between all pairs of vertices in a weighted graph.

algorithm

function floydWarshall(dist, n):
    for k from 0 to n-1:
        for i from 0 to n-1:
            for j from 0 to n-1:
                if dist[i][k] + dist[k][j] < dist[i][j]:
                    dist[i][j] = dist[i][k] + dist[k][j]

    return dist


 Time Complexity  | O(n³)             
Space Complexity | O(n²)               

Use Cases
 Finding shortest paths in dense graphs
 Network routing and optimization
 Social network analysis
 Traffic and transportation systems
 Graph-based dynamic programming problems 