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

void heapify(vector<int>& arr, int n, int p)
{
   int largest = p;
   int l = (2*p) + 1 ;
   int r = (2*p) + 2 ;

   if(l < n && arr[l] > arr[largest])
   {
       largest = l ;
   }

   if(r < n && arr[r] > arr[largest])
   {
       largest = r ;
   }


   if( largest != p)
   {
       swapEl(arr[p],arr[largest]);

       heapify(arr, n, largest);
   }

}

void heap_sort(vector<int>& arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1 ; i >= 0; i-- )
    {
        heapify(arr, n , i);
    }

    for(int i = n-1 ; i > 0 ;i--)
   {
       swapEl(arr[0],arr[i]);

       heapify(arr, i, 0);
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

  heap_sort(arr);


    printVector(arr);
  


    return 0;
}