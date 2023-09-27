#include <iostream>
using namespace std;

int main(){
  int n,a,b,c,x,sum;
  int stop[101];
  while(cin>>n>>a>>b>>c>>x,n||a||b||c||x){
    sum = 0;
    for(int i=0;i<n;i++) cin >> stop[i];
    
    for(int i=0,j=0;i<n;i++){
      while(true){
	if(stop[i] == x) break;
	j++;
	x = (a * x + b) % c;
	if(sum + j > 10000){ sum = -1; goto exit; }
      }
      sum += j;
      x = (a * x + b) % c; j=1;
    }
    
  exit:
    cout << sum << endl;
  }
}