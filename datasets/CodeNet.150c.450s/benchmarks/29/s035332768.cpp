#include <iostream>
#include <list>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
    cin.tie(0);
	int n;
	cin>>n;
	
	
	string command;
	int x;
	list<int> list;
	while(n--){
		cin>>command;
		if(command=="insert"){
				cin>>x;
				list.push_front(x);
		}else if(command=="delete"){
				cin>>x;
				std::list<int>::iterator itr;
				for(itr=list.begin();itr!=list.end();itr++){
					if(*itr==x){
						list.erase(itr);
						break;
					}
				}
		}else if(command=="deleteFirst"){
				list.pop_front();
		}else if(command=="deleteLast"){
				list.pop_back();
		}
		
	}
	int size = list.size();
	for(int i=0;i<size;i++){
		if(i>0)cout<<" ";
		cout<<list.front();
		list.pop_front();
	}
	cout<<endl;
	return 0;
}