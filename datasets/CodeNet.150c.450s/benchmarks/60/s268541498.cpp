#include<iostream>
#include<vector>
#include<string>
using namespace std;

void InputSet(std::vector<int> & a) {
	int n;
	cin >> n;
	a.resize(n,0);
	for(int i=0;i<n;++i) {
		cin >> a.at(i);
		a.at(i)--;
	}
}
int main(){
	//u k v1 v2 ... vk
	int n;
	cin >> n;
	vector<vector<int> > Ad;
	Ad.resize(n);
	for(int k=0;k<n;++k) {
		int u;
		cin >> u;
		--u;
		InputSet(Ad[u]);
	}
	for(int i=0;i<n;++i){
		string a(n,'0');
		for(int j=0;j<(int)Ad[i].size();++j){
			a.at(Ad[i][j]) = '1';
		}
		for(int j=0;j<n;++j){
			if(j==0){
				cout << a[j];
			} else  {
				cout << " " << a[j];
			}
		}
		cout << endl;
	}
}