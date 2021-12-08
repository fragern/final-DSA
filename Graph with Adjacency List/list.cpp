#include <bits/stdc++.h>
#include "list.h"

using namespace std;

void List::push(vector<int> array[], int a, int b, int dist)
{
    array[a].push_back(make_pair(b, dist);
    array[b].push_back(make_pair(a, dist);

    // setting up the distance of dijkstra
    this->dist = dist;
}

void List::printGraph(vector<int> array[], int V)
{
    for (int i = 0; i < V; i++)
    {
        cout << endl
             << "Vertex " << i << ":";
        for (auto x : array[i])
        {
            cout << "-> " << x;
        }
        cout << endl;
    }
}
