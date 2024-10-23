#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> arr = {-1,2,3,3,4,5,-1};
    int n= arr.size();

    int k = 3;
    int l = 0;
    int r = k-1;
    int sum = 0;
    int maxsum = 0;

    for(int i=l; i<=r; i++)
    {
        sum += arr[i];
    }

    while(r <= n-1)
    {
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];

        maxsum = max(maxsum, sum);

    }

    cout<< "Max sum = " << maxsum << endl;
    return 0;
}