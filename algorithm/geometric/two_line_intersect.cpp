#include<bits/stdc++.h>
using namespace std;


int main()
{
    pair<pair<int,int>,pair<int,int>> l1; 
    pair<pair<int,int>,pair<int,int>> l2;

    int a,b;

    cout<< "enter first coordinated of line 1:";
    cin>>a>>b;
    l1.first.first = a;
    l1.first.second = b;

    cout<< "enter second coordinated of line 1:";
    cin>>a>>b;
    l1.second.first = a;
    l1.second.second = b;

    cout<< "enter first coordinated of line 2:";
    cin>>a>>b;
    l2.first.first = a;
    l2.first.second = b;

    cout<< "enter second coordinated of line 2:";
    cin>>a>>b;
    l2.second.first = a;
    l2.second.second = b;

}