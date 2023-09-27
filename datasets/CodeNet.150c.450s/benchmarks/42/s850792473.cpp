#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<int> que1;
	queue<string> que2;
	int n, q;
	cin >> n >> q;
	for(int i=0; i<n; i++){
		string str;
		cin >> str;
		que2.push(str);
		int x;
		cin >> x;
		que1.push(x);
	}
	
	int count = 0;
	while(!que1.empty()){
		int cur = que1.front(); que1.pop();
		string str = que2.front(); que2.pop();
		if( q >= cur ){
			count += cur;
			cout << str << " " << count << endl;
		}else{
			count += q;
			que1.push(cur-q);
			que2.push(str);
		}
	}
	
	return 0;
}