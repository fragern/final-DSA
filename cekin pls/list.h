#include <bits/stdc++.h>
#ifndef LIST_H
#define LIST_H

using namespace std;

class List
{
public:
    void push(vector<pair<int, int>> *al, int a, int b, int time);
    //void printGraph(vector<pair<int, int>> *al, int V);
	void dijkstra(vector<pair<int, int>> *al, int s);
    int a;
    int b;
    int time;
    int s;
};

#endif