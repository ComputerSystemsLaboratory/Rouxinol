#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n, max=0, ans[100];
	vector<int> s;
	for(int i=0; i<100; i++)
		ans[i] = 0;
	while(cin >> n){
		if(n > 100 || n < 1) return 0;
		s.push_back(n);
	}
	sort(s.begin(), s.end());
	vector<int>::iterator it = s.begin();
	while(it != s.end()){
		ans[*it-1]++;
		it++;
	}
	for(int i=0; i<100; i++)
		if(max < ans[i]) max = ans[i];
	for(int i=0; i<100; i++)
		if(max == ans[i]) cout << i+1 << endl;
}