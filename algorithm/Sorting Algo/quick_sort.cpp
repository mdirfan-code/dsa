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

int partition(vector<int>& arr, int l, int h)
{
   int i=l-1,j=l,pivot = arr[h];

   for(;j<=h-1;j++)
   {
       if(arr[j] < pivot)
       {
           i++;
           swapEl(arr[i],arr[j]);
       }
   }
   swapEl(arr[i+1],arr[h]);
   return (i+1);


}

void quick_sort(vector<int>& arr,int l,int h)
{
    if(l<h){
        
        int pi = partition(arr,l,h);

        quick_sort(arr,l,pi-1);
        quick_sort(arr,pi+1,h);
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

  quick_sort(arr,0,arr.size());


    printVector(arr);
  


    return 0;
}