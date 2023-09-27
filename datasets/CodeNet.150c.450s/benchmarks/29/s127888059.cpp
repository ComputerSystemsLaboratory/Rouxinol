#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string com;
	int key;
	list <int> va;
	for(int i=0;i<n;i++){
		cin >> com;
		if(com=="insert"){
			cin >> key;
			va.push_front(key);
		}
		if(com=="deleteLast")
			va.pop_back();
		if(com=="deleteFirst")
			va.pop_front();
		if(com=="delete"){
			cin >> key;
			for(auto itr=va.begin();itr!=va.end();itr++)
				if(*itr==key){
					va.erase(itr);
					break;
				}
		}
	}
	for(auto itr=va.begin();itr!=va.end();++itr){
		cout << *itr;
		if(itr!=--va.end())
			cout << " ";
		else
			cout << endl;
	}
	return 0;
}