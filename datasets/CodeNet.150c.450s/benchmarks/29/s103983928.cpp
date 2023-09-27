#include <iostream>
#include <list>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
list<int> x;

int main(){
	ios_base::sync_with_stdio(false);
	cin >> n;
	rep(i, n){
		string a;
		cin >> a;
		if(a == "deleteFirst"){
			x.pop_front();
		}
		else if(a == "deleteLast"){
			x.pop_back();
		}
		else{
			int b;
			cin >> b;
			if(a == "insert"){
				x.push_front(b);
			}
			else{
				list<int>::iterator it = find(x.begin(), x.end(), b);
				if(it != x.end()){
					x.erase(it);
				}
			}
		}
	}
	for(list<int>::iterator it = x.begin(); it != x.end(); ++it){
		if(it != x.begin()){
			cout << ' ';
		}
		cout << *it;
	}
	cout << endl;
	return 0;
}