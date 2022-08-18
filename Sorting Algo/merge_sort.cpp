#include<bits/stdc++.h>

using namespace std;

void printVector(vector<int> arr)
{
    cout<<"\nVector : ";
    for(auto i : arr)
    {
        cout<<i<<" | ";
    }
    cout<<" \n";
}

void swapEl(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

vector<int> merge(vector<int> arr, int l, int h)
{
    int
 

}

vector<int> merge_sort(vector<int> arr,int l,int h)
{
   if(l<h)
   {
       int mid = l+(h-l)/2;

       vector<int> left = merge_sort(arr,l,mid);

       vector<int> right = merge_sort(arr,mid+1,h);
       merge();
   }
}

int main()
{
    vector<int> arr;
    int n, i, ele;

    cout<<"Enter the size of array : ";
    cin>>n;
    
    cout<<"Enter the elements of array : ";

    for(i=0;i<n;i++)
    {
        cin>>ele;
        arr.push_back(ele);
        
    }

    merge_sort(arr,0,arr.size());


    printVector(arr);
  


    return 0;
}