#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

int main(){
	stack<int> garage;
	vector<int> out;
	int enter;
	while(cin >> enter){
		if(enter == 0){
			out.push_back(garage.top());
			garage.pop();
		}
		else{
			garage.push(enter);
		}
	}

	for(vector<int>::iterator it = out.begin(); it != out.end(); it++){
		cout << *it << endl; 
	}

	return 0;
}