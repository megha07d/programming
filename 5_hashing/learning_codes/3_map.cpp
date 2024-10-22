#include <iostream>
using namespace std;

#include<unordered_map>

int main()
{
    // take input
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // prestore 
    unordered_map <int,int> umap;
    for(int i=0;i<n;i++)
    {
        umap[arr[i]]++;
    }

    int q;
    cin>>q;

    while(q--)
    {
        int elem;
        cin>> elem;
        cout << elem << " appeared " << umap[elem] << " times\n";
    }
    return 0;
}