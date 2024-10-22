#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> arr = {2, 5, 1, 7, 10};
    int n = arr.size();

    vector< vector <int>> bigsub;

    for (int i = 0; i < n; i++)
    {
        vector<int> sub = {};
        for (int j = i; j < n; j++)
        {
            sub.push_back(arr[j]);
            bigsub.push_back(sub);
        }
    }

    for(auto x: bigsub)
    {
        for(int i=0;i< x.size();i++)
        {
            cout<< x[i] << " ";
        }
        cout<< endl;
    }
    return 0;
}