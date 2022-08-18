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

void selection_sort(vector<int>& arr)
{
    for(auto i = 0 ; i < arr.size(); i++ )
    {
        int min = i;

        for(auto j = i+1 ; j < arr.size(); j++ )
        {
           if(arr[min] > arr[j])
           {
               min = j;
           }
        }

    swapEl(arr[i], arr[min]);
   

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

    selection_sort(arr);


    printVector(arr);
  


    return 0;
}