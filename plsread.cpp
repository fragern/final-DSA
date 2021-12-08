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
    int temp;
    int a;
    int b;
    int t;
    int s;
    string tempo;
    vector<string> names;
    int V;

    cout << "How many destination points would you like to add? ";
    cin >> temp;
    cin.ignore();
    V = temp;

    list<pair<int, int>> *adjList = new list<pair<int, int>>[V];

    DijkstraAdjList dijk;

    cout << "please add labels for each destination points" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << "Destination Point Number " << i + 1 << ": ";
        getline(cin, tempo);
        names.push_back(tempo);
    }

    cout << "Directory: " << endl;
    for (int j = 0; j < V; j++)
    {
        cout << "Destination Point Number " << j + 1 << ": " << names[j] << endl;
    }

    cout << "Please enter estimated time taken (t) to go from point a to b in the format : a b t" << endl;
    cout << "to stop putting in data please type 999 999 999" << endl;


    

    while (a != 999 && b != 999 && t != 999)
    {
    	cin >> a >> b >> t;
        if (a == 999 && b == 999 && t == 999)
        {
            break;
        }
        else
        {
            dijk.addEdge(adjList, a, b, t);
        }
    }
    cout << "Please enter from where would you want to go: ";
    cin>>s;


    dijk.dijkstra(adjList, s);
}
