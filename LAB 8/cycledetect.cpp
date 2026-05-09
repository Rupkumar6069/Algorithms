#include <iostream>
using namespace std;

bool dfs(int node, int parent, int visited[], int graph[5][5], int n) {
    visited[node] = 1;

    for(int i = 0; i < n; i++) {
        if(graph[node][i]) {
            if(!visited[i]) {
                if(dfs(i, node, visited, graph, n))
                    return true;
            }
            else if(i != parent) {
                return true; 
            }
        }
    }
    return false;
}

int main() {
    int n = 5;

    int graph[5][5] = {
        {0,1,0,0,1},
        {1,0,1,0,0},
        {0,1,0,1,0},
        {0,0,1,0,1},
        {1,0,0,1,0}
    };

    int visited[5] = {0};

    if(dfs(0, -1, visited, graph, n))
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}