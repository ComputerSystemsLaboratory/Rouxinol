#include<bits/stdc++.h>
#define Rep(i,N) for(int i = 0;i < N;i++)
#define int64 long long
using namespace std;
int main(){
  int n,b;
  cin >> n;
  n--;
  int64 a[n+1][21];
  fill_n(*a,(n+1)*21,0);
  Rep(i,n){
    cin >> b;
    if(i != 0){
      Rep(j,21){
	if(a[i-1][j] != 0){
	  if(j+b <= 20)a[i][j+b] += a[i-1][j];
	  if(j-b >= 0)a[i][j-b] += a[i-1][j];
	}
      }
    }
    else a[0][b]++;
  }
  cin >> b;
  cout << a[n-1][b] << endl;
  return (0);
}