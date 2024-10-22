
// Here graph is directed
// graph is weighted

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int> > arr[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        int w;

        cin >> u >> v >> w;

        // ad v to u's vctor - with weight - so add (v, w) to u's vector
        arr[u].push_back(make_pair(v, w));
    }

    for (int i = 1; i < n + 1; i++)
    {
        cout << "i = " << i;
        for (auto x : arr[i])
        {
            cout << "(" << x.first << "," << x.second << ") ";
        }
        cout << endl;
    }
}