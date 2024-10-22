#include <iostream>
using namespace std;

int main()
{
    // input string
    string st;
    cin >> st;

    // precompute
    int hashh[256] = {0};

    cout << hashh[89] << endl;
    int n = st.size();
    for (int i = 0; i < n; i++)
    {
        char c = st[i];
        hashh[c] += 1;
    }

    // input num of queries
    int q;
    cin >> q;
    while (q--)
    {
        // input each query
        char ch;
        cin >> ch;

        // fetch
        cout << " Index = " << int(ch) << endl;
        cout << ch << " appears => " << hashh[ch] << " times\n";
    }
    return 0;
}