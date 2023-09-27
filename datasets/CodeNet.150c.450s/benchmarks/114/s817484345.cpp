#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool f[100];
int n;
int tr[100];


int trmin(){
  int res=10000,resi;
  for(int i=0;i<n;i++)
    if(f[i]==0 && tr[i]<res) res = tr[i],resi=i;
  return resi;
}


int main (){

  int mp[100][100];

  cin >> n;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin >> mp[i][j];

  for(int i=0;i<n;i++) f[i]=0;
  for(int i=0;i<n;i++) tr[i]=10000;
  tr[0] = 0;
  int trsum=0;

  for(int k=0;k<n;k++){
    int r=trmin();
    f[r]=1;
    trsum+=tr[r];

    for(int i=0;i<n;i++) 
      if(mp[r][i]!=-1)
	tr[i] = min(tr[i],mp[r][i]);
  }
  cout<<trsum<<endl;

  return 0;
}