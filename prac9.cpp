#include <iostream>
#include <queue>
using namespace std;

int graph[20][20], visited[20], n;

void DFS(int v) {
    visited[v] = 1;
    cout << v << " ";

    for (int i = 0; i < n; i++) {
        if (graph[v][i] && !visited[i])
            DFS(i);
    }
}

void BFS(int start) {
    int seen[20] = {0};
    queue<int> q;

    q.push(start);
    seen[start] = 1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int i = 0; i < n; i++) {
            if (graph[v][i] && !seen[i]) {
                q.push(i);
                seen[i] = 1;
            }
        }
    }
}

int main() {
    int e, u, v, start;

    cout << "Enter vertices and edges: ";
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        graph[u][v] = graph[v][u] = 1;
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS: ";
    for (int i = 0; i < n; i++) visited[i] = 0;
    DFS(start);

    cout << "\nBFS: ";
    BFS(start);

    cout << endl;
    return 0;
}
