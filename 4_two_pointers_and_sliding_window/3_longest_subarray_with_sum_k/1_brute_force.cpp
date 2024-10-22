#include <iostream>
#include <vector>
using namespace std;

int longest_Sub_With_K_Sum(vector<int> &arr, int k)
{
    int maxlen = 0;
    int n = arr.size();

    int sum;
    int lenSub;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if (sum > k)
            {
                sum = sum - arr[j];
                cout << endl
                     << "sum = " << sum << endl;
                lenSub = j - i + 1 - 1;
                maxlen = max(maxlen, lenSub);
                break;
            }
        }
    }
    return maxlen;
}

int main()
{
    vector<int> arr = {2, 5, 1, 7, 10};
    int n = arr.size();
    cout << longest_Sub_With_K_Sum(arr, 14);
    return 0;
}