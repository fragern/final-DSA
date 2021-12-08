#include <bits/stdc++.h>

using namespace std;

class DijkstraAdjList
{
public:
    void addEdge(list<pair<int, int>> *adjList, int start, int finish, int time);
    void dijkstra(list<pair<int, int>> *adjList, int var);
    int minDistance(int dist[], bool visited[]);

    list<pair<int, int>> *adjList;
    int start;
    int finish;
    int time;
    int var;
};

void DijkstraAdjList::addEdge(list<pair<int, int>> *adjList, int start, int finish, int time)
{
    adjList[start].push_back(make_pair(finish, time));
    adjList[finish].push_back(make_pair(start, time));
}

void DijkstraAdjList::dijkstra(list<pair<int, int>> *adjList, int var)
{
    int dist[5];
    bool visited[5] = {};

    for (int i = 0; i < 5; i++)
        dist[i] = INT_MAX;

    dist[var] = 0;

    for (int i = 0; i < 4; i++)
    {
        int start = minDistance(dist, visited);
        visited[start] = true;
        for (list<pair<int, int>>::iterator it = adjList[start].begin(); it != adjList[start].end(); it++)
            if (visited[it->first] == false && dist[start] != INT_MAX && dist[it->first] > dist[start] + it->second)
                dist[it->first] = dist[start] + it->second;
    }
    for (int i = 0; i < 5; i++)
        cout << "0 --> " << i << " ---> " << dist[i] << endl;
}

int DijkstraAdjList::minDistance(int dist[], bool visited[])
{
    int min = INT_MAX, index = 0;

    for (int i = 0; i < 5; i++)
    {
        if (dist[i] <= min && visited[i] == false)
        {
            min = dist[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    list<pair<int, int>> *adjList = new list<pair<int, int>>[5];

    DijkstraAdjList dijk;

    dijk.addEdge(adjList, 0, 1, 2);
    dijk.addEdge(adjList, 0, 2, 4);
    dijk.addEdge(adjList, 1, 2, 1);
    dijk.addEdge(adjList, 1, 3, 4);
    dijk.addEdge(adjList, 1, 4, 5);
    dijk.addEdge(adjList, 2, 1, 5);
    dijk.addEdge(adjList, 2, 3, 2);
    dijk.addEdge(adjList, 2, 4, 3);
    dijk.addEdge(adjList, 3, 4, 1);

    dijk.dijkstra(adjList, 0);
}
