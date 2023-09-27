#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL H[20001];
UL HH[20001];

int main() {
 string S; cin >> S;
 UL N=S.size();
 H[0]=HH[0]=100000;
 rep(i,N){
  if(S[i]=='/') H[i+1]=H[i]+1;
  if(S[i]=='\\') H[i+1]=H[i]-1;
  if(S[i]=='_') H[i+1]=H[i];
  HH[i+1]=max(HH[i],H[i+1]);
 }
 HH[N]=H[N];
 for(UL i=N; i!=0; i--){
  HH[i-1]=min(HH[i-1],max(H[i-1],HH[i]));
 }
 rep(i,N+1) HH[i]-=H[i];
 vector<UL> ans; ans.push_back(0);
 rep(i,N+1){
  if(HH[i]==0 && ans.back()!=0) ans.push_back(0);
  else if(HH[i]!=0) ans.back()+=HH[i];
 }
 ans.pop_back();
 UL A=0; for(UL a:ans) A+=a;
 printf("%u\n",A);
 printf("%u",ans.size());
 for(UL a:ans) printf(" %u",a);
 printf("\n");
 return 0;
}

