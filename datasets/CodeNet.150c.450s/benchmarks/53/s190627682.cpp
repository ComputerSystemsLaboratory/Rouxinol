#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){	
	int n ;
	register int nm;
	vector<int> v;
	cin>>n;
	nm=n;
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(nm==1) break;
		if(nm%i==0){
			v.push_back(i);
			nm/=i;
			i--;
		}
	}
	if(v.empty()){
		v.push_back(n);
	} else {
		for(int i=(int)sqrt(n); i<=n ; i++){
			if(nm==1) break;
			if(nm%i==0){
				v.push_back(i);
				nm/=i;
				i--;
			}
		}
	}
	
	cout << n << ":";
	for(int i=0 ; i<v.size() ; i++){
		cout << " " <<v[i];
	}
	cout << endl;
	return 0;
}