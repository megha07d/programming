#include<iostream>
using namespace std;

void f()
{
    cout << 1 << endl;
    f();
}

int main()
{
    f();
}

// segmentation fault
// stack overflow - numerous function calls waiting for recursion