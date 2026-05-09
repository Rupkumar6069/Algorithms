#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int adj[100][100];

    cout << "Enter adjacency matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }

    int stage[100] = {0};
    stage[0] = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(adj[i][j] == 1) {
                if(stage[j] < stage[i] + 1)
                    stage[j] = stage[i] + 1;
            }
        }
    }

    int maxStage = 0;
    for(int i = 0; i < n; i++) {
        if(stage[i] > maxStage)
            maxStage = stage[i];
    }

    cout << "Number of stages = " << maxStage;

    return 0;
}