#include <bits/stdc++.h>
#include "list.h"

using namespace std;

void List::push(vector<pair<int, int>> array[], int a, int b, int time)
{
    array[a].push_back(make_pair(b, time);
    array[b].push_back(make_pair(a, time);

    // setting up the distance of dijkstra
    this->time = time;
}

void List::printGraph(vector<pair<int, int>> array[], int V)
{
    for (int i = 0; i < V; i++)
    {
        cout << endl
             << "Vertex " << i << ":";
        for (auto x=array[i].begin(); x!=array[i].end(); x++)
        {
            n = x->first;
            w = x->second;
            cout << "-> " << n << " weight: " << w << " ";
        }
        cout << endl;
    }
}
