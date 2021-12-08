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

void List:: min_time(int time[], bool visited[]){
    int min = INT_MAX, index = 0;
    for(int i = 0; i < V; i++){
        if(time[i] <= min && visited[i] == false){
            min = time[i];
            index = i;
        }
    }
    return index;
}

void List:: dijkstra(vector<pair<int, int>> array, int s){
    int time[V];
    bool visited[V];
    for(int i = 0; i < V; i++){
        time[i] = INT_MAX;
    }
    time[s] = 0;
    for(int i = 0; i < V; i++){
        int u = min_time(time, visited);
        visited[u] = true;
        for(list <pair<int, int>> :: iterator it = array[i].begin(); it != array[i].end(); it++){
            if(visited[it->first] == false && time[u] != INT_MAX && time[it->first] > time[u] + it->second){
                time[it->first] = time[u] + it->second;
            }
        }
    }
    for(int i = 0; i < V; i++){
        cout << "1 --> " << i << " --> " << time[i] << endl;
    }
}
