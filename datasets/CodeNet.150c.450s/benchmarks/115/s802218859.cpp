#include <iostream>
using namespace std;

#define MAX 1024

int LCS[MAX][MAX];

int solve(string s1,string s2){
  for(int i=1;i<=s1.length();i++){
    for(int j=1;j<=s2.length();j++){
      if(s1[i-1]==s2[j-1])
	LCS[i][j]=LCS[i-1][j-1]+1;
      else
	LCS[i][j]=max(LCS[i][j-1],LCS[i-1][j]);
    }
  }
  return LCS[s1.length()][s2.length()];
}


int main(){
  string s1, s2;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int i=0;i<MAX;i++){
      for(int j=0;j<MAX;j++){
        LCS[i][j] = 0;
      }
    }
    cin>>s1>>s2;
    cout<<solve(s1,s2)<<endl;
    /*
    for(int i=0;i<=s1.length();i++){
      for(int j=0;j<=s2.length();j++){
	cout << LCS[i][j] << "  " ;
      }
      cout << endl;
    }*/
  }

}