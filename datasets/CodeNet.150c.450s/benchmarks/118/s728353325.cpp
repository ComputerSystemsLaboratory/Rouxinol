#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int n;
  cin >> n;
  int y,m,d;
  int a,x;
  x=(1000-1)*195+(1000-1)/3*5;
  for(int i=0;i<n;i++){
    cin >> y >> m >> d;
    a=(y-1)*195+(y-1)/3*5;
    if(y%3){
      a+=(m-1)*19+((m-1)-(m-1)/2);
    }else{
      a+=(m-1)*20;
    }
    a+=d-1;
    cout << x-a << endl;
  }
  return 0;
}

