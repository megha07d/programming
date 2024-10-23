#include <iostream>
using namespace std;

#include<unordered_map>
#include<map>

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
    // unordered_map <int,int> map;
    map <int,int> map;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }

    // cout << "unordered map elems : \n";
    cout << "ordered map elems : \n";
    
    for(auto it:map)
    {
        cout << it.first << " & " << it.second << endl;
    }

    int q;
    cin>>q;

    while(q--)
    {
        int elem;
        cin>> elem;
        cout << elem << " appeared " << map[elem] << " times\n";
    }
    return 0;
}