#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
	int n,r,p,c,tmp;
	while(cin >> n >> r){
	if(n==0)
		break;
	deque<int> library;
	vector<int> stack;
	for(int i=1;i<=n;i++)
	library.push_back(n-i+1);
	for(int i=0;i<r;i++){
		cin >> p >> c;
		for(int j=p+c-1;j<library.size();){
			stack.push_back(library.back());
			library.pop_back();
		}
		for(int j=0;j<c;j++){
			tmp=library.back();
			library.pop_back();
			library.push_front(tmp);
		}
		while(!stack.empty()){
			library.push_back(stack.back());
			stack.pop_back();
		}
	}
	cout << library.front() << endl;
	library.clear();
	stack.clear();
	}
	// your code goes here
	return 0;
}