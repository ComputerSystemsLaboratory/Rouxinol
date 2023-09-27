/*** ??±????????£????????? ***/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, r;
	int p, c;
	vector<int> huda, temp;
	vector<int>::iterator itr;
	
	cin >> n >> r;
	for(int i=0; i<n; i++) huda.push_back(i+1);
	
	while(n!=0 && r!=0){
		for(int i=0; i<r; ++i){
			cin >> p >> c;
			
			for(int j=0; j<c; ++j){
				itr = huda.begin()+(n-p-j);
				temp.push_back(*itr);
				huda.erase(itr);
			}
			for(int j=c-1; j>=0; --j){
				itr = temp.begin()+j;
				huda.push_back(*itr);
			}
			
			temp.clear();
		}
		cout << *(huda.begin()+n-1) << endl;
		
		cin >> n;
		cin >> r;
		huda.clear();
		for(int i=0; i<n; i++) huda.push_back(i+1);
	}
	return 0;
}