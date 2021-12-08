#include<iostream>
#include<list>
using namespace std;

void push(list<pair<int, int> > *al, int a, int b, int t){
  al[a].push_back(make_pair(b, time));
}

int min_time(int dist[], bool visited[]){
  int Min = INT_MAX, index = 0;
  for(int i = 0; i < 5; i++)
    if(dist[i] <= Min && visited[i] == false){
      Min = dist[i];
      index = i;
    }
  return index;
}

/*void printGraph(vector<pair<int, int>> *al, int V)
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
}*/

void dijkstra(list<pair<int, int> > *al, int s){
  int dist[5];
  bool visited[5] = {};
  for(int i = 0; i < 5; i++)
    dist[i] = INT_MAX;
  dist[s] = 0;
  for(int i = 0; i < 4; i++){
    int u = min_distance(dist, visited);
    visited[u] = true;
    for(list<pair<int, int> > :: iterator it = al[u].begin(); it != al[u].end(); it++)
      if(visited[it->first] == false && dist[u] != INT_MAX && dist[it->first] > dist[u] + it->second)
        dist[it->first] = dist[u] + it->second;
  }
  for(int i = 0; i < 5; i++)
    cout<<"0 --> "<<i<<" ---> "<<dist[i]<<endl;
}