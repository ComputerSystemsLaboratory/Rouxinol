#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <list>

using namespace std;
list <long> L;
int main(){
	long n; scanf("%ld",&n);
	while (n--){
		char tmp[20]; scanf("%s",&tmp);
		string a; a = tmp;
		if (a == "insert" || a == "delete"){
			long b; scanf("%ld", &b);
			if (a == "insert"){
				L.push_front(b);
			}
			else{
				list <long>::iterator Lite;
				for (Lite = L.begin(); Lite != L.end(); Lite++){
					if (*Lite == b){
						L.erase(Lite); break;
					}
				}
			}
		}
		else if (a == "deleteFirst"){
			L.pop_front();
		}
		else if (a == "deleteLast"){
			L.pop_back();
		}
	}
	list <long>::iterator Lite;
	for (Lite = L.begin(); Lite != L.end(); Lite++){
		if (Lite != L.begin()) printf(" ");
		printf("%ld", *Lite);
	}
	printf("\n");
}