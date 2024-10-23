#include<iostream>
using namespace std;

int cnt = 0;

void f()
{
    if(cnt > 4)
    {
        return;
    }

    cout<< cnt << endl;
    cnt += 1;
    f();
}

int main()
{
    f();
}

// segmentation fault
// stack overflow - numerous function calls waiting for recursion