#include<iostream>
#include<vector>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2)
{
    if( p1.second < p2.second ) return true;
    if( p1.second > p2.second ) return false;

    // comes here if sec elems are same 
    // now do this
    if(p1.first > p2.first) return true;
    else return false;


}

int main()
{
    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};

    // sort acc to sec elem
    // if sec elem is same 
    // sort acc to first elem but in descending




    sort(a,a+3,comp);
    // {{4,1} {2,1} {1,2}}

    for(int i=0;i<3;i++)
    {
        cout<< a[i].first << " " << a[i].second << endl;
    }

    cout<< a[0].second << " ";


}