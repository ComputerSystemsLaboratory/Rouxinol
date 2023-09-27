#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	deque<int> a;
	int num, n;
	string command;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>command;
		if((command.length() >= 6) && (command[6] == 'F')){
			a.pop_front();
		}else if((command.length() >= 6) && (command[6] == 'L')){
			a.pop_back();
		}else if(command[0] == 'i'){
			cin>>num;
			a.push_front(num);
		}else if(command == "delete"){
			cin>>num;
			deque<int>::iterator iter;
			iter = find(a.begin(), a.end(), num);
			if(iter != a.end())
				a.erase(iter);
		}
	}

	
	for(int i=0;i<a.size();i++){
		if(i != 0) cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	
	return 0;
}