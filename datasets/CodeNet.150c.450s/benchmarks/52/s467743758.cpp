#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
using namespace std;

int main(){
	int n;
	stack<int> qu;
	vector<int> v;
	while(cin >> n){
		if(n != 0){
			qu.push(n);
		}else{
			//v = qu.top();
			cout << qu.top() << endl;
			qu.pop();
		}
	}
	/*for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}*/

}