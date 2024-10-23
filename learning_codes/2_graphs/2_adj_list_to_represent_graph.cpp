

//-------------------------------------------------//
//// How to store a graph using adjacency list //////
//-------------------------------------------------//

// undirected graph


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        // add v in u's vector
        arr[u].push_back(v);

        // add u in v's vector
        arr[v].push_back(u);
    }

    // see what u got
    for (int i = 0; i < n + 1; i++)
    {
        for (auto x : arr[i])
        {
            cout << x << " ";
        }

        cout << endl;
    }
    return 0;
}