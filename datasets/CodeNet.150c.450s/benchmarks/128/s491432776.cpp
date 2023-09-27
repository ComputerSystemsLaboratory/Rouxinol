#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

void Reverse()
{
    string str;
    
    cin>>str;
    
    reverse(str.begin(), str.end()); //function is used for reversing sequence
    
    cout<<str<<endl;
   
    return;
}
    
  
int main()
{  
    Reverse();
    return 0;
}