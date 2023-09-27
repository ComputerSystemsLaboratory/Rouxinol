#include<iostream>
using namespace std;

int main()
{
  int sum;
  string a;
  while(1){
    cin>>a;
    if(a[0]=='0')break;
    sum=0;
    for(int i=0;a[i]!='\0';i++){
      sum+=(a[i]-'0');
    }
    cout<<sum<<endl;
  }
  return 0;
}