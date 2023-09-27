#include <bits/stdc++.h>
using namespace std;
const long double PI = acos(-1);
typedef long long ll;
typedef pair<int64_t,int64_t> pll;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};
#define rep(i,a,b) for (int64_t i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
#define ALL(a) begin(a),end(a)
#define sz(s) (s).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

int mcxiin(string x)
{
    int sum=0;
    REP(k,x.size())
    {
        if(x[k]=='m'){if(k==1)sum+=1000*(int)(x[0]-'0');else sum+=1000;}
        else if(x[k]=='c'){if(x[k-1]<='9'&&x[k-1]>'1')sum+=100*(int)(x[k-1]-'0');else sum+=100;}
        else if(x[k]=='x'){if(x[k-1]<='9'&&x[k-1]>'1')sum+=10*(int)(x[k-1]-'0');else sum+=10;}
        else if(x[k]=='i'){if(x[k-1]<='9'&&x[k-1]>'1')sum+=(int)(x[k-1]-'0');else sum+=1;}
    }
    return sum;
}

string mcxiout(int x)
{
    string xx=to_string(x);
    string sum;
    if(x/1000){if(xx[xx.size()-4]!='1')sum.push_back(xx[xx.size()-4]);sum.push_back('m');}
    if(x/100%10){if(xx[xx.size()-3]!='1')sum.push_back(xx[xx.size()-3]);sum.push_back('c');}
    if(x/10%10){if(xx[xx.size()-2]!='1')sum.push_back(xx[xx.size()-2]);sum.push_back('x');}
    if(x%10){if(xx[xx.size()-1]!='1')sum.push_back(xx[xx.size()-1]);sum.push_back('i');}
    return sum;
}

int main()
{
    int n;cin>>n;
    REP(lkafl,n)
    {
        string a,b;cin>>a>>b;
        int av=mcxiin(a);int bv=mcxiin(b);
        //cout<<av<<" "<<bv<<endl;
        int ab=av+bv;
        cout<<mcxiout(ab)<<endl;
    }
}
