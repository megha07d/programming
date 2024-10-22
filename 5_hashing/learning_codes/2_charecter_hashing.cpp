#include <iostream>
using namespace std;

int main()
{
    // input string
    string st;
    cin >> st;

    // precompute
    int hashh[26] = {0};

    cout << hashh[4] << endl;
    int n = st.size();
    for (int i = 0; i < n; i++)
    {
        char c = st[i];
        hashh[c-'a'] += 1;
    }

    // // input num of queries
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     // input each query
    //     char ch;
    //     cin >> ch;

    //     // fetch
    //     cout << ch << " appears => " << hashh[ch] << " times\n";
    // }
    return 0;
}