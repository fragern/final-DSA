#include <bits/stdc++.h>
using namespace std;

#include "list.h"

int main()
{
    List list;
    int temp;
  
    int V;
    cout<<"How many destination points would you like to add? ";
    cin<<temp;
    V=temp;
  
    // Create a graph
    vector<int> arr[V];

    // Add edges and print the graph
    list.push(arr, 1, 2);
    list.push(arr, 1, 2);
    list.push(arr, 2, 3);
    list.push(arr, 3, 4);
    list.push(arr, 4, 2);
    list.printGraph(arr, V);
}
