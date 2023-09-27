#include<bits/stdc++.h>
using namespace std;
using ull=unsigned long long;
#define mod 1000000007
#define mod2 998244353 
#define PI 3.14159265
#define ll long long
#define ld long double
#define pi pair<ll,ll>
#define pb push_back
#define vi vector<ll>
#define sz size()
#define setbits(x)  __builtin_popcount(x)
#define fi first
#define se second
#define lz length()
#define all(x) (x).begin(),(x).end()
#define scf(x) scanf("%lld",&x)
#define rep(i,n) for(ll i=0;i<n;i++)
const int INF = (int)1e9;
const ll IINF=1LL<<62;
const int maxn=10000005;
 /*BASIS VECTOR IN XOR SUMS
 void insertvector(ll mask){
    for(int i=0;i<BSIZE;i++){
        if((mask&1<<i)==0)continue;
        if(!base[i]){
            base[i]=mask;return;
        }
        mask^=base[i];
    }
}*/
//int divr[maxn];
/*ll modexpo(ll a,ll b)
{
     int ans=1LL;
     while(b>0)
     {
          if(b&1)ans=(ans*a)%mod;
          a=(a*a)%mod;
          b>>=1;
     }
     return ans;
}
*/
/*void divisor()
{for(int i=2;i<sqrt(maxn);i++)
     {
          if(!divr[i])
          {
               for(int j=i*i;j<maxn;j+=i)if(!divr[j])divr[j]=i;     
          }
     }
     for(int i=1;i<maxn;i++)if(!divr[i])divr[i]=i;
}*/
 
/*const int N=1000005;
ll n;
struct line {
    long long m, c;
    long long eval(long long x) { return m * x + c; }
    long double intersectX(line l) { return (long double) (c - l.c) / (l.m - m); }
};
vector<pair<pi,ll>> rect;
deque<line> dq;
*/
/*int find(int a){
     if(a==par[a])return a;
     return par[a]=find(par[a]);
}
void unite(int a,int b){
     a=find(a),b=find(b);
     if(a==b)return ;
     par[b]=a;
}
*/
///////GAUSS ELIMINATION
/*void gausselimination()
{
    int n,i,j,k;
    cout.precision(4);        //set precision
    cout.setf(ios::fixed);
    cout<<"\nEnter the no. of equations\n";        
    cin>>n;                //input the no. of equations
    float a[n][n+1],x[n];        //declare an array to store the elements of augmented-matrix    
    cout<<"\nEnter the elements of the augmented-matrix row-wise:\n";
    for (i=0;i<n;i++)
        for (j=0;j<=n;j++)    
            cin>>a[i][j];    //input the elements of array
    for (i=0;i<n;i++)                    //Pivotisation
        for (k=i+1;k<n;k++)
            if (abs(a[i][i])<abs(a[k][i]))
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
    cout<<"\nThe matrix after Pivotisation is:\n";
    for (i=0;i<n;i++)            //print the new matrix
    {
        for (j=0;j<=n;j++)
            cout<<a[i][j]<<setw(16);
        cout<<"\n";
    }    
    for (i=0;i<n-1;i++)            //loop to perform the gauss elimination
        for (k=i+1;k<n;k++)
            {
                double t=a[k][i]/a[i][i];
                for (j=0;j<=n;j++)
                    a[k][j]=a[k][j]-t*a[i][j];    //make the elements below the pivot elements equal to zero or elimnate the variables
            }
    
    cout<<"\n\nThe matrix after gauss-elimination is as follows:\n";
    for (i=0;i<n;i++)            //print the new matrix
    {
        for (j=0;j<=n;j++)
            cout<<a[i][j]<<setw(16);
        cout<<"\n";
    }
    for (i=n-1;i>=0;i--)                //back-substitution
    {                        //x is an array whose values correspond to the values of x,y,z..
        x[i]=a[i][n];                //make the variable to be calculated equal to the rhs of the last equation
        for (j=i+1;j<n;j++)
            if (j!=i)            //then subtract all the lhs values except the coefficient of the variable whose value                                   is being calculated
                x[i]=x[i]-a[i][j]*x[j];
        x[i]=x[i]/a[i][i];            //now finally divide the rhs by the coefficient of the variable to be calculated
    }
    cout<<"\nThe values of the variables are as follows:\n";
    for (i=0;i<n;i++)
        cout<<x[i]<<endl;            // Print the values of x, y,z,....    
    return 0;
}*/
const int BSIZE=62;
ll base[BSIZE];
const int N=205;
ll a[N];
int n;

int main(){
    int t;cin>>t;
    while(t--){
    cin>>n;
    memset(base,0,sizeof(base));
    for(int i=0;i<n;i++)cin>>a[i];
    string s;
    cin>>s;
    int f=0;
    for(int i=n-1;i>=0;i--){
        ll cur=a[i];
        int index=-1;
        for(int j=0;j<BSIZE;j++){
            if((cur&(1LL<<j))==0)continue;
            if(!base[j]){
               // cout<<j<<" "<<cur<<"\n";
                index=j;break;
            }
            cur^=base[j];
        }
        if(s[i]=='0'){
            if(index!=-1){base[index]=cur;//cout<<index<<" "<<cur<<"\n";
            }
        }
        else{
            if(cur!=0){
                cout<<"1\n";f=1;
            }
        }
        if(f)break;
        
    }
    if(!f)cout<<"0\n";
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 