#include <iostream>
#include <cstdio>
#include <deque>
#include <string>
using namespace std;

int main(){
	int n,num;
	string s;
	deque<int> de;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s;
		if(s == "deleteFirst"){
			de.pop_front();
			continue;
		}
		else if(s == "deleteLast"){
			de.pop_back();
			continue;
		}
		scanf("%d",&num);
		if(s == "insert"){
		de.push_front(num);
		}
		else if(s == "delete"){
			for(deque<int>::iterator ite = de.begin();ite < de.end();ite++){
				if(*ite == num){
					de.erase(ite);
					break;
				}
			}
		}
	}
	for(int i = 0;i < de.size();i++){
	if(i == de.size() - 1)cout << de[i] <<endl;
	else printf("%d ",de[i]);
	}
	return 0;
}