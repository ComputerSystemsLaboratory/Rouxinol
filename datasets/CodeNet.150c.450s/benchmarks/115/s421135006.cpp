#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 1000

int main(){
  int n;
  cin>>n;
  string a,b;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    int C[MAX+1][MAX+1]={0};
    for(int i=1;i<=a.size();i++){
      for(int j=1;j<=b.size();j++){
        if(a[i-1]==b[j-1]) C[i][j]=C[i-1][j-1]+1;
        else{
          C[i][j]=max(C[i-1][j],C[i][j-1]);
        }
      }
    }
    cout<<C[a.size()][b.size()]<<endl;
  }

}

