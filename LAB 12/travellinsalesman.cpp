#include <iostream>
using namespace std;

#define N 4
#define INF 9999

int graph[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

bool visited[N];

int tsp(int curr, int count, int cost, int ans) {

    if(count == N && graph[curr][0]) {
        return min(ans, cost + graph[curr][0]);
    }

    for(int i = 0; i < N; i++) {
        if(!visited[i] && graph[curr][i]) {
            visited[i] = true;

            ans = tsp(i, count + 1,
                      cost + graph[curr][i], ans);

            visited[i] = false;
        }
    }

    return ans;
}

int main() {
    for(int i = 0; i < N; i++)
        visited[i] = false;

    visited[0] = true;

    int result = tsp(0, 1, 0, INF);

    cout << "Minimum travelling cost = " << result;

    return 0;
}