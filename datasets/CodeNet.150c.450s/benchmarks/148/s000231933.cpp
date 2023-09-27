using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define INFINITE 1e9 + 5
#define MOD 1000000007
#define MAXN 100001 
#define pll pair<ll,ll>
#define pii pair<int,int>
#define debugArray(arr) cout << #arr<<" : "<<endl;for(int i : arr){cout << i <<", ";} cout <<endl;
#define debugVariable(x) cout <<#x<<"="<<x<<"\n";
#define check(x) cout<<"CHECK="<<#x<<"\n";
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    int test;
    cin>>test;
     int ac=0,wa=0,tle=0,re=0;
    while(test--)
    {
        string s;
        cin>>s;
        if(s=="AC")
        {
            ac++;
        }
        else if(s=="WA")
        {
            wa++;
        }
        else if(s=="TLE")
        {
            tle++;
        }
        else
        {
            re++;
        }
        

    }
    cout<<"AC x "<<ac<<"\n";
    cout<<"WA x "<<wa<<"\n";
    cout<<"TLE x "<<tle<<"\n";
    cout<<"RE x "<<re<<"\n";
}