/**
Task:
    An unweighted graph is given. We have to calculate
    shorted part from source node for each node.
Complexity:
    O(V+E).
    Here, V = vertex/Node and E = Edge
**/

#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
int visited[100];

void bfs(int start, int totalNode) {
    memset(visited, 0, sizeof(visited));

    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty()) {
        int item = q.front();
        q.pop();
        for(int i=0; i < adj[item].size(); i++) {
            if(visited[adj[item][i]] == 0) {
                int currentNode = adj[item][i];
                visited[currentNode] = visited[item]+1;
                q.push(currentNode);
            }
        }
    }
}
int main() {
    int node = 6, edge = 8;
    int input[8][2] = {{1,2},{1,4},{2,4},{2,5},{4,5},{5,3},{3,6},{6,6}};
    for(int i=0; i<edge; i++) {
        adj[input[i][0]].push_back(input[i][1]);
        adj[input[i][1]].push_back(input[i][0]);//if undirected
    }
    bfs(input[0][0], node);
    //print the shortest path
    for(int i=1; i<=node; i++)
        printf("Node %d - from source, shortest path %d\n", i, visited[i]-1);
    return 0;
}
