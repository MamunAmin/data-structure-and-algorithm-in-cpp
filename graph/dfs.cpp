/**
Task:
    An unweighted graph is given. We have to visit
    every node from source node.
Complexity:
    O(V+E).
    Here, V = vertex/Node and E = Edge
**/

#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
int visited[100];

void dfs(int vertex) {
    if(visited[vertex]) return;
    visited[vertex] = 1;
    printf("Node %d visited.\n", vertex);
    for(int i=0; i < adj[vertex].size(); i++)
        dfs(adj[vertex][i]);
}
int main() {
    int node = 6, edge = 8;
    int input[8][2] = {{1,2},{1,4},{2,4},{2,5},{4,5},{5,3},{3,6},{6,6}};
    for(int i=0; i<edge; i++) {
        adj[input[i][0]].push_back(input[i][1]);
        adj[input[i][1]].push_back(input[i][0]);//if undirected
    }
    dfs(input[0][0]);
    return 0;
}

