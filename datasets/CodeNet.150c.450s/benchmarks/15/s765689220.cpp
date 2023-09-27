#include <iostream>
#include <cstdio>
using namespace std;

int ls(int S[],int n,int T[],int q){
  int count=0;
  for(int i=0;i<q;++i)
    for(int j=0;j<n;j++)
      if(T[i]==S[j]){
	count++;
	break;
      }
  return count;
}

int main() {
  int n;
  cin >> n;
  int S[n];
  for(int i=0;i<n;++i)
    cin >> S[i];

  int q;
  cin >> q;
  int T[q];
  for(int i=0;i<q;++i)
    cin >> T[i];
  
  cout << ls(S,n,T,q) << endl;
}