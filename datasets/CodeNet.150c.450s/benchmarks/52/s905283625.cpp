#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a;
	vector<int>l;
	while (cin >> a){
		if (a == 0){
			cout << l.back()<<endl;
			l.pop_back();
		}else{
			l.push_back(a);
		}
	}
}