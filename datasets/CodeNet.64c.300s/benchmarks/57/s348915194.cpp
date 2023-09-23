#include<bits/stdc++.h>

#define int long long int
#define rep(a,b,c) for(int a=b;a<c;a++)
#define repm(a,b,c) for(int a=(b-1);a>=c;a--)
#define pb push_back
#define str string
#define sf(a) scanfs("%d",&a)
#define pb push_back
#define mp make_pair
#define Fi first
#define Se second
#define ALL(v) (v).begin(), (v).end()

using namespace std;

const int INF = 1e18 + 9;
const int Mod = 1e9 + 7;
inline int replac(str s){double ans=0;rep(i,0,s.length()){ans+=(s[i]-'0')*pow(10,s.length()-i-1);}return (int)ans;}
inline string numstr(int m){str s="";while(m>0){char c;int a=m/10;if(a>0)a=m%(a*10);else a=m;c=(char)('0'+a);s+=c;m/=10;}str st="";for(int i=s.size()-1;i>=0;i--){st+=s[i];}return st;}
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
int w,h;
int high[10500];
int cou(int bit){
    int an=0;
    int flag[10];
    rep(i,0,10){
        flag[i]=false;
    }
    rep(i,0,h){
        if((bit>>i)&1){
            //cout << 1;
            flag[i]=true;
        }//else cout << 0;
    }
    //cout << endl;
    //if(__builtin_popcount(bit)==h)return 0;
    rep(j,0,w){
        int b=0;
        rep(i,0,h){
            if(!flag[i]&&((high[j]>>i)&1))b++;
            else if(flag[i]&&!((high[j]>>i)&1))b++;
            //b=__bilten_popcount(a);
        }
        b=max(b,(h-b));
   //     cout << b << " ";
        an+=b;
    }
    //if(an==16)cout <<"hai";
 //   cout << endl;
    return an;
}
int f(int num,int bit){
    if(num>=h){
        return cou(bit);
    }else{
        return max(f(num+1,bit|(1<<num)),f(num+1,bit));
    }
}
signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(1){
    cin >> h >> w;
    rep(i,0,10001){
        high[i]=0;
    }
    if(h==0&&w==0)break;
    rep(i,0,h){
        rep(j,0,w){
            int x=0;cin >> x;
            if(x==1){
                high[j]|=(1<<i);
            }
        }
    }
    cout << f(0,0) << endl;
    }
    return 0;
}