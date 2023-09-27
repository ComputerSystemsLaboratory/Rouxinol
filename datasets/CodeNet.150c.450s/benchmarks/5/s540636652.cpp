#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> va;
	
	cin >> n;
	for (int i=0; i!=n; ++i){
		int tmp;
		cin >> tmp;
		va.push_back(tmp);
	}
	for(auto rit=va.rbegin(); rit!=va.rend();++rit){
		cout << *rit;
		if (rit!=--(va.rend())){
			cout << ' ';
		}
	}
	cout << endl;
}