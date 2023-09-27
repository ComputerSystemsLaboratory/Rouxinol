#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>

using namespace std;

int main(){
	int n,a;
	string str;
	list<int> l;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> str;
		if(str == "insert"){
			cin >> a;
			l.push_front(a);
		}else if(str == "delete"){
			cin >> a;
			auto itr = l.begin();
			for(;itr!=l.end();++itr)if(*itr==a){l.erase(itr);break;}
		}else if(str == "deleteFirst"){
			l.pop_front();
		}else if(str == "deleteLast"){
			l.pop_back();
		}
	}
	auto itr = l.begin();
	cout << *itr;++itr;
	for(;itr!=l.end();++itr){
		cout << " " << *itr;
	}
	cout << endl;
	return 0;
}