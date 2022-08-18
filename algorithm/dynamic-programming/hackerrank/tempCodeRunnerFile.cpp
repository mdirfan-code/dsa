#include<bits/stdc++.h>
using namespace std; 

map<pair<int,int>,int> memo;


int solve(int n, vector<int> arr, int st =0 )
{	
    pair<int,int> key = make_pair(n,st);

    if(memo.find(key) != memo.end())
    {
        return memo[key];
    }
    int j,count=0;
    if(n==0)
    {
        return 1;
    }
    
    if(n<0 || !(st<arr.size()))
    {
        return 0;
    }


        j=0;
        while(n>=j*arr[st])
        {
            

            count+=solve(n-(j*arr[st]),arr,st+1);
            
            j++;
        }


    


memo.insert(pair<pair<int,int>,int>(key,count));
return count;


}

int main()
{
    int n,m,i,ele;
    vector<int> c;
    cin>>n>>m;
    for(i = 0; i<m ; i++)
    {
        cin>>ele;
        c.push_back(ele);
    }

    cout<<solve(n,c)<<"\n";
    

    return 0;
}