#include<bits/stdc++.h>
using namespace std;
#define all(XQXQ) (XQXQ).begin(), (XQXQ).end()
#define rall(PNPN) (PNPN).rbegin(), (PNPN).rend()
#define ll long long
#define MO 1000000007
#define PB push_back
#define MP make_pair
#define MX 100005
#define times(ZZtimes) for(int XYZtimes=0;XYZtimes<ZZtimes;++XYZtimes)
#define MS(ZZtarget,ZZvalue) memset(ZZtarget,ZZvalue,sizeof(ZZtarget))
#define S(SCQW) scanf("%d",&SCQW)
#define SS(SCQW,ZSCQW) scanf("%d%d",&SCQW,&ZSCQW);
#define SSS(SCQW,ZSCQW,ZZSCQW) scanf("%d%d%d",&SCQW,&ZSCQW,&ZZSCQW)
#define SSSS(SCQW,ZSCQW,ZZSCQW,ZZZSCQW) scanf("%d%d%d%d",&SCQW,&ZSCQW,&ZZSCQW,&ZZZSCQW)
#define P(PRQW) printf("%d\n",PRQW)
#define eps 1e-8
#define PP(PRQW) printf("%d ",PRQW)
#define HAS(QPEU) !QPEU.empty()
#define rep(iW,JEJU,nW) for(int (iW)=JEJU;(iW)<(int)(nW);(iW)++)
#define FD(qeVECTORXMO,qeVALXMO) find(qeVECTORXMO.begin(),qeVECTORXMO.end(),qeVALXMO)!=qeVECTORXMO.end()
#define ST(qeVECTORXMO) sort(qeVECTORXMO.begin(),qeVECTORXMO.end())
#define ff first
#define ss second
#define x1 x1992WAZY
#define y1 y1992WALSR
#define x2 y1992WAHM
#define y2 y1992WADX
ll bigpow(ll a,ll b) {ll res=1;a%=MO;for(;b;b>>=1){if(b&1)res=res*a%MO;a=a*a%MO;}return res;}
void main2();int main(){
cin.tie(0);ios_base::sync_with_stdio(0);
main2();return 0;}

void main2() {
  ll N;
  cin >> N;
  ll cur = 2;
  cout << N << ":";
  while (N > 1) {
    while (N % cur == 0) {
      N /= cur;
      cout << " " << cur;
    }
    cur++;
    if (cur * cur > N) cur = N;
  } 
  cout << endl;
}