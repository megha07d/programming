#include <iostream>
using namespace std;

int len_of_longest_substring(string s)
{
    int n = s.size();
    string substr;
    int maxlen = 0;
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        substr = "";

        // hashmap of 256-char length to remember if we got this char alreay or not
        int hash[256] = {0};

        for (int j = i; j < n; j++)
        {
            // if its a repeating char, it doesnt make sense to continue anymore
            // whatever string that comes out after - stands invalid
            if (hash[s[j]] == 1)
            {
                break;
            }
            substr = substr + s[j];
            len = j - i + 1;

            // updating with maximum len we have seen until now
            maxlen = max(maxlen, len);
            hash[s[j]] = 1;
        }
    }

    return maxlen;
}


// time complexity analysis  - O(N^2) : gen all substrings
// space complexity analysis - O(256) : for the hash space


// optimizations u can be asked 
// > optimize the time complexity to - O(N) or O(N logN)
// > can u not use space etc

int main()
{
    string s = "cadbzabcd";
    int res = len_of_longest_substring(s);
    cout << "len_of_longest_substring without repeat charecters = " << res << endl;
    return 0;
}