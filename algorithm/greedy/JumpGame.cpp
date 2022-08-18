#include<bits/stdc++.h>
using namespace std; 
map<int,bool> memo;

 bool canJump(vector<int>& nums) {
        
       
    
        
        
    }

void solve()
{	
    int n,ele;
    vector<int> arr;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<canJump(arr)<<"\n";
}

int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++ )
    {
        solve();
    }

    return 0;
}