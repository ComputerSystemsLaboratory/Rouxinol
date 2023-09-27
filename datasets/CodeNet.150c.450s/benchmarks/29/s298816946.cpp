#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	string s;
	int n,i,a;
	list<int> li;
	list<int>::iterator p=li.begin();
	cin >> n;
	for(i=0;i<n;i++){
		cin >> s;
		if(s=="insert"){
			cin >> a;
			li.push_front(a);
		}
		else if(s=="delete"){
			cin >> a;
			p=find(li.begin(),li.end(),a);
			if(p!=li.end()) li.erase(p);
			
		}
		else if(s=="deleteFirst"){
			li.pop_front();
		}
		else if(s=="deleteLast"){
			li.pop_back();
		}

	}
	p=li.begin();

	while(p != li.end()){
		cout << *p;
		p++;
		if(p!=li.end()) cout << " ";
		else cout << endl;
	}

	return 0;
	
}