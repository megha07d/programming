#include <iostream>
#include <vector>
using namespace std;

int maxLenSub(vector<int> &arr, int k)
{
    int l = 0;
    int r = 0;
    int sum = 0;
    int maxlen = 0;
    int curlen = 0;

    int n = arr.size();

    while (r < n)
    {
        sum = sum + arr[r];

        // make it a valid window - if itsnot
        if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - arr[l];
                l++;
            }
        }

        // now check and update maxlen
        if (sum <= k)
        {
            cout << "l = " << l << ", r = " << r << ", sum = " << sum << ", curlen = " << curlen << ", maxlen = " << maxlen << endl;
            curlen = r - l + 1;
            maxlen = max(maxlen, curlen);
        }

        r++;
        // cout << "r = " << r << " & points to " << arr[r] << " & sum = " << sum << endl;
    }

    return maxlen;
}

int main()
{
    vector<int> arr = {2, 5, 25, 7, 5, 2};
    int n = arr.size();
    cout << maxLenSub(arr, 14);
    return 0;
}