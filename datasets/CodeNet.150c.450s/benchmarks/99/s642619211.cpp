#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back

typedef long long ll;
typedef pair<int,int> P;

//-----------------------------------------------------------------------

int d[]={1000,100,10,1};
char c[]={'m','c','x','i'};

int translate(string s){
    int res=0;
    REP(i,s.size()){
	REP(j,4){
	    if(s[i]==c[j]){
		if(i>0 && '2'<=s[i-1] && s[i-1]<='9') res+=(s[i-1]-'0')*d[j];
		else res+=d[j];
	    }
	}
    }
    return res;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n; cin>>n;
    REP(i,n){
	string s1,s2;
	cin>>s1>>s2;
	int num=translate(s1)+translate(s2);

	REP(i,4){
	    int k=num/d[i];
	    num-=k*d[i];
	    if(k>1) cout<<k;
	    if(k>0) cout<<c[i];
	}
	cout<<endl;
    }
    
}

