#include<iostream>
#include<string>
using namespace std;
int main(){
  string s[9];
  s[0]=".,!?S";
  s[1]="abc";
  s[2]="def";
  s[3]="ghi";
  s[4]="jkl";
  s[5]="mno";
  s[6]="pqrs";
  s[7]="tuv";
  s[8]="wxyz";
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string t;
    cin>>t;
    int c=0;
    for(int j=0;j<t.size();j++){
      if(t[j]=='0'){
	if(j-1>=0)if(t[j-1]!='0'){
	  if(s[t[j-1]-'1'][(j-c-1)%s[t[j-1]-'1'].size()]=='S')cout<<" ";
	  else cout<<s[t[j-1]-'1'][(j-c-1)%s[t[j-1]-'1'].size()];
	}
	c=j+1;
      }
    }
    cout<<endl;
  }
  return 0;
}