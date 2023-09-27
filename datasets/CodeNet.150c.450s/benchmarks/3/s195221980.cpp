#include <iostream>
#include <cstring>
using namespace std;

using ll = long long;

#define for_(i,a,b) for(int i = (a);i < (b);i++)
#define rfor_(i,a,b) for(int i = (b)-1;i >= (a);i--)
#define rep(i,n) for_(i,0,(n))
#define rrep(i,n) rfor_(i,0,(n))

char str[1002], cp[1002];

char p[1002];

int q;

char f[10];
int a, b;

int main(){
	cin.tie(0);
	
	cin>>str;
	cin>>q;
	
	int l = strlen(str);
	
	rep(ii, q) {
	    cin>>f>>a>>b;
	    if(f[2]=='i') {
	        for_(i, a, b+1)cout<<str[i];
	        cout<<endl;
	    }else if(f[2]=='v') {
	        rep(i, l)cp[i] = str[i];
	        rep(i, b-a+1)cp[a+i] = str[b-i];
	        rep(i, l)str[i] = cp[i];
	    }else {
	        cin>>p;
	        rep(i, b-a+1)str[a+i] = p[i];
	    }
	}

	return 0;
}

