//Osaki
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int num[24*60*60]; //?????????,?§?????????£???????????°??°

int main(){
  int n;
  while(cin>>n, n!=0){
    for(ll i=0; i<24*60*60; i++)num[i]=n;
    for(int i=0; i<n; i++){
      int sh, sm, ss, eh, em, es;
      scanf("%2d:%2d:%2d %2d:%2d:%2d", &sh, &sm, &ss, &eh, &em, &es);
      for(ll j=(sh*60*60)+(sm*60)+ss; j<(eh*60*60)+(em*60)+es; j++)
	num[j]--;
    }
    int mini=n;
    for(ll i=0; i<24*60*60; i++)
      if(mini>num[i])mini=num[i];
    cout<<n-mini<<endl;
  }
  return 0;
}