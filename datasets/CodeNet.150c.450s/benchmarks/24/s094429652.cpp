#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct kukan{
	int p;
	int kyori;
};
bool hikaku(const kukan &right,const kukan &left){
	return right.p == left.p ? right.kyori > left.kyori : right.p > left.p;
}

int main(){
	int n,m,d,s,res;
	kukan a;
	vector<kukan> v;
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0)break;
		v.clear();
		res = 0;
		for(int i = 0;i < n;i++){
			cin >> d >> s;
			if(s == 0)continue;
			a.p = s;
			a.kyori = d;
			v.push_back(a);
			res += d * s;
		}
		if(m == 0){
			cout << res <<endl;
			continue;
		}
		if(v.size() == 0){
			cout << 0 <<endl;
			continue;
		}
		sort(v.begin(),v.end(),hikaku);
		for(int i = 0;i < v.size();i++){
			if(m >= v[i].kyori){
				m -= v[i].kyori;
				res -= v[i].kyori * v[i].p;
				if(m == 0)break;
			}
			else if(m < v[i].kyori){
				res -= v[i].p * m;
				break;
			}
		}
		cout << res <<endl;	
	}
	return 0;
}