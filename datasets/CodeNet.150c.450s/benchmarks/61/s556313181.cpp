#include<iostream>
#include<vector>

using namespace std;

int a,b,c,x;

int my_rand(){
    int _x = x;
    x = (a * x + b) % c;
    return _x;
}

int main(void){
  int n;

  while(cin >> n >> a >> b >> c >> x, n|a|b|c|x){
    vector<int>y(n),data(10000);

    for(int i=0;i<n;i++)cin >> y[i];
    
    for(int i=0;i<=10000;i++)data[i]=my_rand();

    int k = 0;
    for(int i=0;i<=10000;i++){
      if(y[k]==data[i])k++;
      if(n==k){
	cout << i << endl;
	goto end;
      }
    }
    cout << -1 << endl;
  end:;
  }
  
  return 0;
}