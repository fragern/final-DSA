#include <bits/stdc++.h>
using namespace std;

void push(vector<int> arr[], int a, int b)
{
    arr[a].push_back(b);
    arr[b].push_back(a);
}

// Print the graph
void printGraph(vector<int> arr[], int V)
{
    for (int i = 0; i < V; ++i)
    {
        cout << "\n Vertex "
             << i << ":";
        for (auto x : arr[i])
            cout << "-> " << x;
        printf("\n");
    }
}

int main()
{
    // How many vertex that the graph has
    int V = 5;

    // Create a graph
    vector<int> arr[V];

    // Add edges and print the graph
    push(arr, 0, 1);
    push(arr, 1, 2);
    push(arr, 2, 3);
    push(arr, 3, 4);
    push(arr, 4, 0);
    printGraph(arr, V);
}