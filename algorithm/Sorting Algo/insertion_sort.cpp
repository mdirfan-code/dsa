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

void insertion_sort(vector<int>& arr)
{
    int curr,j;
    for(auto i = 0 ; i < arr.size(); i++ )
    {
        curr = arr[i];
        j = i - 1;

        while(j >=0 && arr[j] > curr)
        {
            arr[j+1] = arr[j];
            j-=1;
        }

        arr[j+1] = curr;


   

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

  insertion_sort(arr);


    printVector(arr);
  


    return 0;
}