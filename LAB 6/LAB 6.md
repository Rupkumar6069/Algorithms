Aim
1.To find the shortest distance from a source vertex to all other vertices in a weighted graph.
2.To select the maximum number of non-overlapping activities from a given set.

algorithms

1.Dijkstra’s

function dijkstra(graph, source):
    initialize distance array with infinity
    mark all vertices as unvisited

    distance[source] = 0

    repeat (n-1) times:
        select vertex u with minimum distance (not visited)
        mark u as visited

        for each neighbor v of u:
            if not visited and
               distance[u] + weight(u,v) < distance[v]:
                update distance[v]

    return distance[]

2.Activity Selection
 function activitySelection(activities):
    sort activities by finish time

    select first activity
    lastEnd = finish time of first

    for each activity:
        if start >= lastEnd:
            select activity
            update lastEnd

    return selected activities

    Time Complexity

| Algorithm          | Technique | Time Complexity | Space Complexity |
| ------------------ | --------- | --------------- | ---------------- |
| Dijkstra           | Greedy    | O(V²)           | O(V)             |
| Activity Selection | Greedy    | O(n log n)      | O(1)             |

Use Cases

1.Dijkstra’s
 GPS navigation systems
 Network routing (shortest path)
 Maps and pathfinding
 Telecommunications

 2.Activity Selection
 Scheduling meetings
 task scheduling
 Event planning
 Resource allocation
 