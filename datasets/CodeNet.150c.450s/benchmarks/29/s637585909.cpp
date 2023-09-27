#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;
	int commands;
	char command[20];
	int data;
	cin >> commands;

	for(int i=0;i<commands;i++){
		cin >> command;
		if(command[0]=='i'){
			cin >> data;
			l.push_front(data);
		}else if(command[6]=='F'){
			l.pop_front();
		}else if(command[6]=='L'){
			l.pop_back();
		}else if(command[0]=='d'){
			cin >> data;
			for(list<int>::iterator itr=l.begin();itr!=l.end();++itr){
				if(*itr==data){
					l.erase(itr);
					break;
				}
			}	
		}
	}
	list<int>::iterator last=l.end();--last;
	for(list<int>::iterator itr=l.begin();itr!=l.end();++itr){
		cout << *itr;
		if(itr!=last)cout<<" ";
	}
	cout << endl;
	return 0; 
}