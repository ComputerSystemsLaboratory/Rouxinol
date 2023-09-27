#include <iostream>
#include <vector>
using namespace std;

struct tr{
	char f;
	char t;
};

int main(){
	vector<tr> trs;
	tr t;
	int n,m,l,f;
	while(cin>>n,n){
		while(n--){
			cin >> t.f >> t.t;
			trs.push_back(t);
		}
		cin>>m;
		while(m--){
			f=0;
			cin >> t.f;
			for(l=0;l<trs.size();l++){
				if(t.f==trs[l].f){
					cout<<trs[l].t;
					f=1;
					break;
				}
			}
			if(!f)cout << t.f;
		}
		cout << endl;
		trs.clear();
	}
	return 0;
}