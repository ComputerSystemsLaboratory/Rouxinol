#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int ans;

int main(){
	int a,b,v,n,f;
	while(cin >> a >> b){
		if(a==0&&b==0){
			return 0;
		}
		
		vector<int> vec;
		for(int i=0;i<a+b;i++){
			cin >> v;
			vec.push_back(v);
		}
		vector<int> t,h;
		t.assign(&vec[0], &vec[a]);
		h.assign(&vec[a], &vec[a+b]);
		
		sort(t.begin(), t.end()); 
		sort(h.begin(), h.end()); 
		
		int totalt = 0;
		int totalh = 0; 
		for(int i=0;i<a;i++){
			totalt = totalt + t[i];
		}
		for(int i=0;i<b;i++){
			totalh = totalh + h[i];
		}
		
		f = 0;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(((totalt - t[i] + h[j]) == (totalh + t[i] - h[j])) && (f == 0)){
					cout << t[i] << " " <<h[j] << endl;
					f = 1;
				}
			}
		}
		if(f == 0){
		cout << -1 << endl;
		}
	}
	return 0;
}