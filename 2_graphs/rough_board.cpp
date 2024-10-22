#include<iostream>

using namespace std;

void edit_arr(int arr[])
{
    arr[0] = 110;
    return;
}

int main()
{
    int arr[] = {0,1,2,3};
    edit_arr(arr);
    for(int i=0;i<4;i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}