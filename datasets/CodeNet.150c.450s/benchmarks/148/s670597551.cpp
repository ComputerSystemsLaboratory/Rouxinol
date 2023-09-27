#include<bits/stdc++.h>
using namespace std;


int main()
{
 int n; 
  
  cin>>n; 
  
  int a[4]; 
  memset(a, 0 , sizeof(a));
  
  for( ; n--; )
  {
    string s ; 
    cin>>s; 
    
    
    if(s == "AC")
      a[0]++; 
    else if(s =="WA")
      a[1]++; 
    else if(s == "TLE")
      a[2]++;
    else 
      a[3]++; 
  }
  cout<<"AC x "<<a[0]<<endl; 
  cout<<"WA x "<<a[1]<<endl; 
  cout<<"TLE x "<<a[2]<<endl;
  cout<<"RE x "<<a[3]<<endl;
  
  
  
}