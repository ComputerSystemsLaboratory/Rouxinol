#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<string> vs;
#define ifr(i,n) for((i)=0;(i)<(n);i++)
#define dfr(i,n) for((i)=(n);(i)>=0;i--)
/*
char upper(char C){
  if('a'<=C && C<='z')
    C = C-32;
  return C;
}
*/
char upper(char C){
   if(C >= 'a' && C <= 'z')
	C = C + 'A' - 'a';
   return C;
}
int main(){
  string str;
  string str2;
  int num=0;
  cin>>str2;
  for(int i=0;i<str2.size();i++)
    str2[i]=upper(str2[i]);
  while(cin>>str,str!="END_OF_TEXT"){
  for(int j=0;j<str.size();j++)
    str[j]=upper(str[j]);
  if(str[str.size()-1]=='.')
    str=str.substr(0,str.size()-1);
  if(str == str2)
    num++;
  }
  cout << num<<endl;
  return 0;
}