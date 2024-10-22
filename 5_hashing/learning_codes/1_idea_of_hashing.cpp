#include <iostream>
using namespace std;
#include <map>

void hash_this_arr(int arr[])
{
    map<int, int> mp;

    for (int i = 0; i < 8; i++)
    {
        int elem = arr[i];
        // "i" is not in map
        if (mp.find(elem) == mp.end())
        {
            mp[elem] = 1;
        }
        else
        {
            mp[elem] += 1;
        }
    }

    // print key and vals in map
    for (auto pair : mp)
    {
        cout << pair.first << " => " << pair.second << endl;
    }

    return;
}

int main()
{
    // input arr size
    int n;
    cin >> n;

    // input arr elements
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // input num of search_elems
    int search_n;
    cin >> search_n;

    // input search elems
    int search_elems[search_n];
    for (int i = 0; i < search_n; i++)
    {
        cin >> search_elems[i];
    }

    // now hash the input array - ( PRECOMPUTE )
    map<int,int> hash_mp;
    for(int i=0;i<n;i++)
    {
        int elem = arr[i];

        if(hash_mp.find(elem) != hash_mp.end())
        {
            // elem is alr in map, so just increment the freq
            hash_mp[elem] += 1;
        }
        else{
            // add elem to hash_mp
            hash_mp[elem] = 1;
        }
    }

    // now return the freq for search_elems
    for(int i=0;i<search_n;i++)
    {
        int find_elem = search_elems[i];

        // ( FETCH )
        if(hash_mp.find(find_elem) == hash_mp.end())
        {
            cout<< find_elem << " is not in array \n";
        }
        else{
            cout<< find_elem << " appears "<< hash_mp[find_elem] << " times in array\n";
        }
    }


    return 0;
}