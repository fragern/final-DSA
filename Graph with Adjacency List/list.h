#include <bits/stdc++.h>
#ifndef LIST_H
#define LIST_H

using namespace std;

class List
{
public:
    void push(vector<int> array[], int a, int b, int dist);
    void printGraph(vector<int> array[], int V);

    int a;
    int b;
    int dist;
};

#endif
