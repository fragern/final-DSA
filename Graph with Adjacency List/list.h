#include <bits/stdc++.h>
#ifndef LIST_H
#define LIST_H

using namespace std;

class List
{
public:
    void push(vector<pair<int, int>> array[], int a, int b, int time);
    void printGraph(vector<pair<int, int>> array[], int V);
	void Dijkstra(vector<pair<int, int>> array[], int s)
    int a;
    int b;
    int time;
    int s;
};

#endif
