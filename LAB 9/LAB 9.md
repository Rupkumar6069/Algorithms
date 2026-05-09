Aim
To determine the total number of stages in a directed graph represented using an adjacency matrix.

algorithm

function findStages(adj, n):
    initialize stage array with 0
    stage[0] = 1   // starting node

    for i from 0 to n-1:
        for j from 0 to n-1:
            if adj[i][j] == 1:
                if stage[j] < stage[i] + 1:
                    stage[j] = stage[i] + 1

    maxStage = maximum value in stage[]
    return maxStage

Time Complexity
O(n²) (due to adjacency matrix traversal)

Space Complexity
O(n²) → adjacency matrix
O(n) → stage array

Use Cases
 Multistage graph problems in Dynamic Programming
 Pipeline processing systems
 Task scheduling with dependencies
 Network flow modeling
 Layer-based graph analysis