#include<bits/stdc++.h>
using namespace std;

int n,a[200];

bool Solve(int m, int x, int indx){

  if(x==m)return true;
  if(indx == n)return false;

  if( Solve(m,x,indx+1)==true )return true;
  if( Solve(m,x+a[indx+1],indx+1)==true )return true;

  return false;

}


int main(){

  int m,q;

  cin >> n;
  for(int i=0; i<n; i++)cin >> a[i];

  cin >> q;

  for(int i=0; i<q; i++){

    cin >> m;

    if( Solve(m,a[0],0) || Solve(m,0,0) )cout << "yes"<<endl;
    else cout << "no" << endl;

  }

  return 0;
}