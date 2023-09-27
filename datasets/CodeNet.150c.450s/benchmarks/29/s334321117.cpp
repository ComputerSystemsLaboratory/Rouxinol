#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    //cin.tie(0); 
    //ios::sync_with_stdio(false);
   
    int n;
    int x;
    char cc[20];
    list<int> L;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
	scanf("%s", cc);
	if (cc[0] == 'i') {
	    scanf("%d", &x);
	    L.emplace_front(x);
	}
	else if (cc[6] == 'L') {
	    L.pop_back();
	}
	else if(cc[6] == 'F') {
	    L.pop_front();
	}
	else {
	    scanf("%d", &x);
	    for (auto iter = L.begin(); iter != L.end(); iter++) {
		if (*iter == x) {
		    L.erase(iter);
		    break;
		}
	    }
	}
    }

    int i = 0;
    for (auto iter = L.begin(); iter != L.end(); iter++) {
	if (i++) {
	    printf(" ");
	}
	printf("%d", *iter);
    }
    printf("\n");

    return 0;
}