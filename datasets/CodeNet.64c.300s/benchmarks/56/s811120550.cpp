#include <iostream>

using namespace std;

int main(){
  int n,y,m,d,i,sum;
  cin >> n;
  for(i=0;i<n;i++){
    sum = 0;
    cin >> y >> m >> d;
    if(y%3==0 || m%2!=0)sum+=20-d;
    else sum+=19-d;
    if(y%3==0)sum+=(10-m)*20;
    else if(m%2==0)sum+=(10-m)/2*39;
    else sum+=19+(10-m-1)/2*39;//ここまでその年
    if(y%3==0)sum+=(1000-y-1)/3*590;
    else if(y%3==1)sum+=395+(1000-y-3)/3*590;
    else sum+=200+(1000-y-2)/3*590;
    cout << sum+1 << endl;
  }
  return 0;
}

