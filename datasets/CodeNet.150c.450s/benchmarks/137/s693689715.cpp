#include <iostream>
#include <cstdio>
#include <string>
#include <set>
using namespace std;

int main() {
	int n;
	string com,word;
	set<string> dic;
	scanf("%d",&n);
	for(int i=0; i<n; ++i) {
		cin >> com >> word;
		if(com=="insert") {
			dic.insert(word);
		} else if(com=="find") {
			if(dic.find(word)!=dic.end()) {
				printf("yes\n");
			} else {
				printf("no\n");
			}
		}
	}
	return 0;
}