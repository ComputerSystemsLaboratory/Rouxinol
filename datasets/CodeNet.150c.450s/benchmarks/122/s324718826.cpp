#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <queue>
using namespace std;

priority_queue<long> q;
int main(){
	while (true){
		char str[10]; scanf("%s",&str);
		if (strcmp(str, "insert")==0){
			long tmp; scanf("%ld",&tmp);
			q.push(tmp);
		}
		else if (strcmp(str, "extract")==0){
			cout << q.top() << '\n';
			q.pop();
		}
		else if (strcmp(str, "end")==0) break;
	}
}