#include<bits/stdc++.h>
using namespace std;

int main()
{
 std::string input;

    std::getline( std::cin, input );

    std::istringstream is( input );

    std::vector<int> v( ( std::istream_iterator<int>( is ) ), std::istream_iterator<int>() );
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    
   
}