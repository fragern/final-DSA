#include <bits/stdc++.h>
#include "list.h"

using namespace std;

void List::push(vector<int> array[], int a, int b)
{
    array[a].push_back(b);
    array[b].push_back(a);
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
