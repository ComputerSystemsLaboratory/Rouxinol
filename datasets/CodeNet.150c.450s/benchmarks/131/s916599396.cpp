#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back

typedef long long ll;
typedef pair<int,int> P;

//-----------------------------------------------------------------------

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,L;
    while(cin>>n>>L,n+L)
    {
	vector<int> a;
	a.push_back(n);

	REP(j,20)
	{
	    int d[6];
	    REP(i,L){
		d[i]=n%10;
		n/=10;
	    }
	    sort(d,d+L);
	    
	    int ma=0,mi=0;
	    REP(i,L){
		ma+=pow(10,i)*d[i];
		mi+=pow(10,i)*d[L-1-i];
	    }
	    n=ma-mi;
	    int i=a.size();
	    a.push_back(n);

	    REP(j,i){
		if(a[i]==a[j]){
		    cout<<j<<" "<<a[i]<<" "<<i-j<<endl;
		    goto g;
		}
	    }
	}
	g:;
    }

}

