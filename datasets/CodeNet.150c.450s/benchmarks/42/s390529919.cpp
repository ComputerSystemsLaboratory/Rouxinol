#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main(){
	queue <int> que1;
	queue <string> que2;
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		string name;
		cin >> name;
		que2.push(name);
		int time;
		cin >> time;
		que1.push(time);
	}
	int t = 0;
	while (!que1.empty()){
		string nows = que2.front();
		int nowi = que1.front();
		if (nowi > q){
			t += q;
			que1.pop();
			que1.push(nowi - q);
			que2.pop();
			que2.push(nows);
		}
		else{
			t += nowi;
			que1.pop();
			que2.pop();
			cout << nows << " " << t << endl;
		}
	}

return 0;
}