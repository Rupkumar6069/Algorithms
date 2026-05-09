#include <iostream>
using namespace std;

int main() {
    int n = 8;

    int cost[8][8] = {
        {0,1,2,5,0,0,0,0},
        {0,0,0,0,4,11,0,0},
        {0,0,0,0,9,5,16,0},
        {0,0,0,0,0,0,2,0},
        {0,0,0,0,0,0,0,18},
        {0,0,0,0,0,0,0,13},
        {0,0,0,0,0,0,0,2},
        {0,0,0,0,0,0,0,0}
    };

    int dist[8];
    int next[8];

    dist[n-1] = 0;

    for(int i = n-2; i >= 0; i--) {
        dist[i] = 9999;

        for(int j = i+1; j < n; j++) {
            if(cost[i][j] != 0) {
                if(cost[i][j] + dist[j] < dist[i]) {
                    dist[i] = cost[i][j] + dist[j];
                    next[i] = j;
                }
            }
        }
    }

    cout << "Minimum cost = " << dist[0] << endl;

    cout << "Path: 0 ";
    int i = 0;
    while(i != n-1) {
        i = next[i];
        cout << i << " ";
    }

    return 0;
}