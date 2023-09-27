#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


#define X real()
#define Y imag()
typedef complex<double> P;

int main(){
	
	typedef pair<int,string> pis;
	vector<pis> a;
	vector<pis> b;
	
	map<string,int> m;
	
	string str;
	while(cin>>str){
		a.push_back( pis((int)str.size(),str) );
		m[str]++;
	}
	
	map<string,int>::iterator it=m.begin();
	while(it!=m.end()){
		b.push_back(pis(-it->second,it->first));
		it++;
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	cout<<b[0].second<<" "<<a[a.size()-1].second<<endl;
	
	
}