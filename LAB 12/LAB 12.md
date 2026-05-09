Aim
To find the minimum cost path that visits all cities exactly once and returns to the starting city.


algorithm

function tsp(current, count, cost, answer):
    
    if all cities visited AND path exists back to start:
        return minimum(answer, cost + return cost)

    for each city:
        if not visited and edge exists:
            mark city as visited

            answer = tsp(next_city,
                         count + 1,
                         cost + edge_cost,
                         answer)

            unmark city (backtrack)

    return answer

 
| Technique        | Backtracking 
| Time Complexity  | O(n!)       
| Space Complexity | O(n)         


Use Cases
 Route optimization (delivery, logistics)
 Traveling and tour planning
 Circuit design (PCB routing)
 DNA sequencing
 Robotics path planning