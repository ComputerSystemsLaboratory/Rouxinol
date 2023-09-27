#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n,a,b;
  string str,ch,p;
  char c;
  cin>>str;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>ch;
    if(ch=="replace"){
      cin>>a>>b>>p;
      for(int j=a,k=0;j<=b;j++,k++)str[j]=p[k];
    }
    if(ch=="reverse"){
      cin>>a>>b;
      for(int j=a,k=b;j<(a+b+1)/2;j++,k--){
	swap(str[j],str[k]);
      }
    }
    if(ch=="print"){
      cin>>a>>b;
      for(int j=a;j<b+1;j++)cout<<str[j];
      cout<<endl;
    }
  }
  return 0;
}