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
#include <deque>

using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	deque <int> d;
	int n;
	string cmd;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> cmd;
		if (cmd == "insert"){
			int x;
			cin >> x;
			d.push_front(x);
		}
		else if (cmd == "delete"){
			int x;
			cin >> x;
			for (deque<int>::iterator i = d.begin(); i != d.end(); i++){
				if (*i == x){
					d.erase(i);
					break;
				}
			}
		}
		else if (cmd == "deleteFirst"){
			d.pop_front();
		}
		else{
			d.pop_back();
		}
	}
	for (deque<int>::iterator i = d.begin(); i != d.end() - 1; i++){
		cout << *i << " ";
	}
	cout << d.back() << endl;

return 0;
}