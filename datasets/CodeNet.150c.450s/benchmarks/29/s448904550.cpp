#include <cstdio>
#include <string>
#include <iostream>
#include <list>

using namespace std;
int main(){
	cin.tie(0);
    ios_base::sync_with_stdio(0);	
	int n,num;
	cin >> n;
	list<int> l;
	list<int>::iterator iter; //回傳一個 iterator 
	for(int i=0 ; i<n ; i++){
		string str;
		cin >> str;
		if(str=="insert"){
			cin >> num;
			l.push_front(num);
		}			
		else if(str=="delete"){
			cin >> num;
			for(iter=l.begin() ; iter!=l.end() ; iter++){
				if(*iter == num){
					l.erase(iter);
					break;
				}		
			}
		
		}		
		else if(str=="deleteFirst")
			l.pop_front();	
		else if(str=="deleteLast")
			l.pop_back();	
	}
	for(iter=l.begin() ; iter!=l.end() ; iter++){
		if(iter!=l.begin())
			cout << " ";
		cout << *iter;
	}
	cout << "\n";
}
