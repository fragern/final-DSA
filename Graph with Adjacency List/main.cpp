#include <bits/stdc++.h>
using namespace std;

#include "list.h"

int main()
{
    List list;
    int temp;
    int a;
    int b;
    int time;
    string tempo;
    vector<string> names;
    int V;

    cout << "How many destination points would you like to add? ";
    cin >> temp;
    cin.ignore();
    V = temp;

    cout << "please add labels for each destination points" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << "Destination Point Number " << i + 1 << ": ";
        getline(cin, tempo);
        names.push_back(tempo);
    }

    cout << "Directory: " << endl;
    for (int j = 0; j < V; j++)
    {
        cout << "Destination Point Number " << j + 1 << ": " << names[j] << endl;
    }

    cout << "Please enter estimated time taken (t) to go from point a to b in the format : a b t" << endl;
    cout << "to stop putting data in type 999 999 999" << endl;

    // Create a graph
    vector<pair<int,int>> arr[V];

    while (a != 999 && b != 999 && time != 999)
    {
    	cin >> a >> b >> time;
        list.push(arr, a, b, time);
    }
    list.printGraph(arr, V);
}
