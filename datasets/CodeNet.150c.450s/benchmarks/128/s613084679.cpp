#include<iostream>
#include<string>
using namespace std;
int main(){
  string a,b;
   cin>>a;
   b=a;
   int as=a.size();
   for(int i=0;i<as;i++)b[i]=a[as-i-1];
   cout<<b<<endl;    
    return 0;
}