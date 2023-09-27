#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string T,TT[10000];
int sum;

string Rev(string S)
{
  reverse(S.begin(),S.end());
  return S;
}

int Con(string S)
{
  for(int i=0;i<sum;i++){
    if(TT[i]==S)return 0;
  }
  return 1;
}

int main()
{
  int m,len;
  string left,right;
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>T;
    len=T.length();
    sum=0;
    TT[sum++]=T;
    for(int j=1;j<len;j++){
      left=T.substr(0,j);
      right=T.substr(j,len);
      if(Con(left+Rev(right)))TT[sum++]=left+Rev(right);
      if(Con(Rev(left)+right))TT[sum++]=Rev(left)+right;
      if(Con(Rev(left)+Rev(right)))TT[sum++]=Rev(left)+Rev(right);
      if(Con(right+left))TT[sum++]=right+left;
      if(Con(right+Rev(left)))TT[sum++]=right+Rev(left);
      if(Con(Rev(right)+left))TT[sum++]=Rev(right)+left;
      if(Con(Rev(right)+Rev(left)))TT[sum++]=Rev(right)+Rev(left);
    }
    cout<<sum<<endl;
  }
  return 0;
}