#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n,i,j;
  string s;
  char c[10][5]={
    {},
    {'.',',','!','?',' '},
    {'a','b','c'},
    {'d','e','f'},
    {'g','h','i'},
    {'j','k','l'},
    {'m','n','o'},
    {'p','q','r','s'},
    {'t','u','v'},
    {'w','x','y','z'}
  };
  cin>>n;
  while(cin>>s){
    j=0;
    for(i=0;i<s.size();i++){
      if(s[i]!='0'){
	j++;
      }else{
	if(j)cout<<c[s[i-1]-'0'][(j-1)%(3+2*(s[i-1]=='1')+(s[i-1]=='7')+(s[i-1]=='9'))];
	j=0;
      }
    }
    cout<<endl;
  }
}