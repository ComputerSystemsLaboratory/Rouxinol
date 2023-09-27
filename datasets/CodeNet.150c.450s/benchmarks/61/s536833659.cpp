#include<iostream>
using namespace std;

int main(){

  int n;
  int a,b,c,x;
  int y[100];
  int sum;


  while(cin >> n >> a >> b >> c >> x){
    if(n==0 && a==0 && b==0 && c==0 && x==0){ break; }

    sum = 0;

    for(int i=0; i<n; i++){
      cin >> y[i];
    }

    int i;
    for(i=0; i<=10000; i++){
      
      if(x==y[sum]){
	sum++;
	if(sum == n)break;
      }

      x = (a*x+b)%c;
    }

    if(i==10001){ cout << -1 << endl; }
    else{         cout << i << endl;  }

  }

  return 0;
}