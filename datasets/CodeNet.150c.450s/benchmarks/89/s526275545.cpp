#include <iostream>
#include <vector>

#define rep(i,a) for(int i = 0;i < a; i++)

using namespace std;

#define MAX 1000010

bool p[MAX];

void era(){

  rep(i,MAX)p[i] = (i<2)? false: true;

  for(int i = 2; i * i < MAX; i++) if(p[i]){
      for(int j = i*2; j < MAX; j += i) p[j] = false;
    }
}

int main(){
  era();
  int a, d, n;
  while(cin>>a>>d>>n,a||d||n){
    int cnt = 0;
    int k = -1;
    while(cnt != n){
      k++;
      if(p[a+d*k]) cnt++;
    }
    cout << a+d*k << endl;
  }
}