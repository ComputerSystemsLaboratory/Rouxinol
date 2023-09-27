#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,b[1100][1100];
  string s1,s2;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s1>>s2;
    for(int j=0;j<=s1.size()+1;j++)b[j][0]=0;
    for(int j=0;j<=s2.size()+1;j++)b[0][j]=0;
    for(int j=1;j<=s1.size();j++){
      for(int k=1;k<=s2.size();k++){
	if(s1[j-1]==s2[k-1])b[j][k]=b[j-1][k-1]+1;
	else if(b[j][k-1]>b[j-1][k])b[j][k]=b[j][k-1];
	else b[j][k]=b[j-1][k];
      }
    }
    cout<<b[s1.size()][s2.size()]<<endl;
  }
  return 0;
}