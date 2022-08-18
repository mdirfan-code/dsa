#include<bits/stdc++.h>
using namespace std; 

void solve()
{	
    int n, st=1, ele;
    vector<int> lvs;
    cin>>n;

    for(int i = 0; i<n; i++ )
    {
        cin>>ele;
        lvs.push_back(ele);   
    }
    for(int i = 0; i<n; i++)
    {
        if(st < lvs[i])
        {
            cout<<"No\n";
            return;
        }
        st -= lvs[i];
        st *= 2;

    }
    if(st==0)
    {
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

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