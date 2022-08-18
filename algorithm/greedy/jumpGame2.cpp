#include<bits/stdc++.h>
using namespace std; 
map<int,bool> memo;

 int canJump(vector<int>& nums) {
        
        int i = 0, steps=0,j=0, n = nums.size();
          
        while(i<n-1)
        {
            steps++;
            int maxJump = i+1;
            j=i+1;
            while(j<=i+nums[i])
            {
                if(maxJump < i+nums[j])
                {
                    maxJump = j;
                }
                j++;
            }
            i=maxJump;
        }
        return steps;
    
        
        
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