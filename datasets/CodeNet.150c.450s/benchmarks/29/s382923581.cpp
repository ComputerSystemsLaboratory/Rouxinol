#include <cstdio>
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	int n,key;
	char buf[20];
	string command;
	list<int> lst;
	scanf("%d",&n);
	for(int i=0; i<n; ++i) {
		scanf("%s",buf);
		command = buf;
		if(command=="insert") {
			scanf("%d",&key);
			lst.push_front(key);
		} else if(command=="delete") {
			scanf("%d",&key);
			for(auto itr=lst.begin(); itr!=lst.end(); ++itr) {
				if((*itr)==key) {
					lst.erase(itr);
					break;
				}
			}
		} else if(command=="deleteFirst") {
			lst.pop_front();
		} else if(command=="deleteLast") {
			lst.pop_back();
		}
	}

	for(auto itr=lst.begin(); itr!=--(lst.end()); ++itr) {
		printf("%d ",*itr);
	}
	printf("%d\n",lst.back());
	return 0;
}