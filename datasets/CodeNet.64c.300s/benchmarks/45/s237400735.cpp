#include<iostream>
using namespace std;

int main(){
  int n,m,p;
  int x[100];

  while(cin >> n >> m >>p, n||m||p){
    int sum = 0;
    for(int i=0;i<n;i++){
      cin >> x[i];
      x[i];
      sum += x[i];
    }

    sum *= 100*(100-p);
    sum /= 100;

    if(!x[m-1])cout << 0 << endl;
    else cout << sum/x[m-1] << endl;
  }
}