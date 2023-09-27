#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int n; cin>>n;
  int h = n/3600;
  n-=h*3600;
  int m = n/60;
  n-=m*60;
  int s = n;
  cout << h << ":" << m << ":" << s << endl;
}