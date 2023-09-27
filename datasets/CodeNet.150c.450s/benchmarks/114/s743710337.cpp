#include <iostream>
using namespace std;

int n;
int a[101][101];
int flg[101];
int t[101];
int sum = 0;

void visit(){
  int ima = 0;
  int mine = 100000000;
  
  
  for(int k=0;k<n-1;k++) {
    mine = 10000000;
    for(int i=0;i<n;i++) {
      if(flg[i] == 0 && mine > t[i]) {
	mine = t[i];
	ima = i;
      }
    }
    sum += mine;
    flg[ima] = 1;
    
    for(int i=0;i<n;i++) 
      if(a[ima][i] != -1) 
	if(t[i] > a[ima][i] ) t[i] = a[ima][i];
    
    
  }
}

int main() {

  cin >> n;

  for(int i=0;i<n;i++) 
    for(int j=0;j<n;j++) 
      cin >> a[i][j];
  
  for(int i=0;i<n;i++) {
    flg[i] = 0;
    t[i] = 100000000;
  }
  
  t[0] = 0;
  flg[0] = 1;
  for(int i=0;i<n;i++) 
    if(a[0][i] != -1) t[i] = a[0][i];

  visit();

  cout << sum << endl;
 
  return 0; 
  
}