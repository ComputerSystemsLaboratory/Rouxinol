#include<iostream>
#include<cstdio>
#include<deque>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	int n,i,x;
	string s;
	deque<int> intlist;
	cin >> n;
	
	
	for(i=0;i<=n-1;i++){
		cin >> s;
		if (s=="insert"){
			cin >> x;
			intlist.push_front(x);
		}else if(s=="delete"){
			cin >> x;
			deque<int>::iterator it =intlist.begin();
			while (1){
				if (*it == x ){
					it=intlist.erase(it);
					break;
				}else if(it == intlist.end()){
					break;
				}
				it++;
			}
		}else if(s=="deleteFirst"){
			intlist.pop_front();
		}else if(s=="deleteLast"){
			intlist.pop_back();
		}
	}
	
	deque<int>::iterator it =intlist.begin();
	cout << *it;
	it++;
	while(1){
		if (it == intlist.end()){
			cout << "\n";
			break;
		}
		cout << " " << *it;
		it++;
	}
	
	return 0;
}