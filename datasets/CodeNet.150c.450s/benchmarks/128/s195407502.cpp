#include <iostream>
#include<string>
using namespace std;

int main()
{
  string a;
  cin>>a;
  for(int b=a.length()-1;b!=-1;b--){
    cout<<a[b];
  }
  cout<<endl;
  return 0;
}