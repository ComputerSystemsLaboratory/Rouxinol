#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

#define FOR(i,k,n) for(int i=(k);i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)

const int INF=100000000;
const bool debug=1;

int main(){
  int N,M,P;
  while(cin>>N>>M>>P,N|M|P){
    int a[N];
    int sum=0;
    REP(i,N){cin>>a[i];sum+=a[i];}
    sum=sum*(100-P);
    if(a[M-1]==0)cout << 0 << endl;
    else cout << sum/a[M-1]<< endl;;
  }
}