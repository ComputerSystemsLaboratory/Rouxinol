#include <iostream>
#include <list>
#include <string>
using namespace std;
#define ll long long
int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
	int n;
	cin>>n;
	string com;
	int key;
	list<ll> lst;
	list<ll>::iterator it,i=lst.end();
	while(n--){
		cin>>com;
		if(com=="insert"){
			cin>>key;
			lst.push_front(key);
		}
		else if(com=="delete"){
			cin>>key;
			for(it=lst.begin();it!=i;it++){
				if(*it==key){
					lst.erase(it);
					break;
				}
			}
		}
		else if(com=="deleteFirst")	lst.pop_front();
		else 						lst.pop_back();
		
	}
	i--;
	for(it=lst.begin();it!=i;it++)	cout<<*it<<" ";
	cout<<*i<<"\n";
	return 0;
}