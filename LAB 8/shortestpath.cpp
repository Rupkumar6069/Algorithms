#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n = 5;

    int g[5][5] = {
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,0}
    };

    int start = 0, end = 4;

    int visited[5] = {0}, parent[5];
    queue<int> q;

    q.push(start);
    visited[start] = 1;
    parent[start] = -1;

    while(!q.empty()) {
        int u = q.front(); q.pop();

        for(int v = 0; v < n; v++) {
            if(g[u][v] && !visited[v]) {
                visited[v] = 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    int path[5], k = 0;
    for(int v = end; v != -1; v = parent[v]) {
        path[k++] = v;
    }

    cout << "Shortest Path: ";
    for(int i = k-1; i >= 0; i--) {
        cout << path[i] << " ";
    }

    return 0;
}