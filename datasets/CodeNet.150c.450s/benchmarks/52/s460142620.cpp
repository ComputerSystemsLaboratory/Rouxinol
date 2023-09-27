#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	stack<int> s;
	int n;
	cin >> n;
	s.push(n);
	while(cin>>n){
		if(n==0){
			v.push_back(s.top());
			s.pop();
		} else {
			s.push(n);
		}
	}
	for(int i=0 ; i<v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;	
}