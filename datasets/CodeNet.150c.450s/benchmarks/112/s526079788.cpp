#include "iostream"
#include "map"
#include "string"
using namespace std;
int main(void)
{
	int n;
	while (cin>>n,n) {
		map<char, char> m;
		for (int i = 0; i < n; i++) {
			char l,r; cin>>l>>r;
			m[l]=r;
		}
		string ans="";
		int num; cin>>num;
		while (num--) {
			char t; cin>>t;
			if(m.count(t)) ans+=m[t];
			else ans+=t;
		}
		cout<<ans<<endl;
	}
	return 0;
}