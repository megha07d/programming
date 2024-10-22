
// print only one subsequce  - dont want all answes - how do u do?
// for perefect sum


//{ Driver Code Starts
#include <iostream>
using namespace std;
#include<vector>


// } Driver Code Ends
class Solution{

public:

int traverse_n_sum(int ind, 
                    vector<int> cur_arr, 
                    int cur_sum, 
                    int target_sum,
                    vector<vector<int> >& collec_arr, 
                    int &total_count,
                    int arr[], 
                    int n, 
                    int& rec_calls)
{
    rec_calls += 1;
    
    if(ind == n)
    {
        if(cur_sum == target_sum)
        {
            cout<< "\n--------\n";
            for(int x: cur_arr)
            {
                cout<< x<< " ";
            }
            cout<<endl;
            total_count += 1;

            return 99;
        }
        return -99;
    }
    
    
    
    cur_arr.push_back(arr[ind]);
    cur_sum += arr[ind];
    int val = traverse_n_sum(ind+1, cur_arr, cur_sum, target_sum, collec_arr, total_count, arr, n, rec_calls);

    if(val == 99)
    {
        return 99;
    }
    
    cur_arr.pop_back();
    cur_sum -= arr[ind];
    val = traverse_n_sum(ind+1, cur_arr, cur_sum, target_sum, collec_arr, total_count, arr, n, rec_calls);

    if(val==99)
    {
        return 99;
    }

    return -99;
    
    
    
}


int perfectSum(int arr[], int n, int sum)
{
    // Your code goes here
    
    vector<int> cur_arr;
    vector<vector<int> > collec_arr;
    int cur_sum = 0;
    int ind = 0;
    int total_count = 0;
    int rec_calls = 0;
    
    int cur_val = traverse_n_sum(ind, cur_arr, cur_sum, sum, collec_arr, total_count, arr, n, rec_calls);
    
    cout<< "Num of recusrion calls = "<< rec_calls<<endl;
    
    
    return total_count;
}
};

int main() 
{
   	
   
   	int t;
    cout<< "enter test cases t : ";
    cin >> t;
    while (t--)
    {
        int n, sum;
        cout<< "enter n and sum : ";
        cin >> n >> sum;

        cout<< "enter elements : ";
        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    int ans = ob.perfectSum(a, n, sum);
        cout<< "num of subsets :" << ans << endl; 
	     
    }
    return 0;
}