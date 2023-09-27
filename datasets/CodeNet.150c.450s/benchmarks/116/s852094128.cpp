    #include <iostream>
    using namespace std;
    #define rep(i, n) for(int i=0;i<(n);i++)
     
    int a[100000] = {};
    int s[100000] = {};
    int n, k, m;
     
    int main() {
     
    	while(cin>>n>>k, n|k) {
    		rep(i, n)cin>>a[i];
    		s[0] = 0;
    		rep(i, k)s[0]+=a[i];
    		rep(i, n-k)s[i+1]=-a[i]+s[i]+a[i+k];
    		m=s[0];
    		rep(i, n-k+1) {
    			if(m<s[i])m=s[i];
    		}
    		cout<<m<<endl;
    	}
     
    	return 0;
    }