#include <iostream>
using namespace std;

int main() {
    int n = 4;  

    int graph[4][4] = {
        {0, 2, 0, 6},
        {2, 0, 3, 8},
        {0, 3, 0, 0},
        {6, 8, 0, 0}
    };

    int dist[4], visited[4];

    for(int i = 0; i < n; i++) {
        dist[i] = 9999;   
        visited[i] = 0;
    }

    dist[0] = 0; 

    for(int count = 0; count < n - 1; count++) {
        int min = 9999, u;

        for(int i = 0; i < n; i++) {
            if(!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }
        }

        visited[u] = 1;

        for(int v = 0; v < n; v++) {
            if(graph[u][v] && !visited[v] && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "Vertex  Distance\n";
    for(int i = 0; i < n; i++) {
        cout << i << "       " << dist[i] << endl;
    }

    return 0;
}