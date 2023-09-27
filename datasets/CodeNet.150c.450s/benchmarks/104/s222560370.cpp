#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main(){
	int w, n;
	cin >> w;
	cin >> n;
	cin.ignore();
	
	vector<int> v(w);
	for(int i = 1; i <= v.size(); i++){
		v[i - 1] = i;
	}

	int a, b, c;
	string buf;
	for(int i = 0; i < n; i++){
		getline(cin, buf);
//		cin >> buf;
		sscanf(buf.c_str(), "%d, %d", &a, &b);
		c = v[a - 1];
		v[a - 1] = v[b - 1];
		v[b - 1] = c;
	}
	for(int& i : v){
		cout << i << endl;
	}
}