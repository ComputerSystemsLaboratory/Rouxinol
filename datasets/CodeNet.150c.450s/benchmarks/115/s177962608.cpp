#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int dat[1024][1024];
int getLcbLen(char* x, int xe, char* y, int ye){
	if(xe <= 0 || ye <= 0) return 0;
	if(dat[xe][ye] != -1) return dat[xe][ye];
	return dat[xe][ye] = (x[xe-1] == y[ye-1] ? 1 + getLcbLen(x, xe-1, y, ye-1) : max(getLcbLen(x, xe-1, y, ye), getLcbLen(x, xe, y, ye-1)));
}

int main() {
	int set;
	scanf("%d", &set);
	
	while(set--){
		char x[1024], y[1024];
		scanf("%s %s", x, y);
		
		for(int i = 0; i < 1024; i++){
			for(int k = 0; k < 1024; k++){
				dat[i][k] = -1;
			}
		}
		printf("%d\n", getLcbLen(x, (int)strlen(x), y, (int)strlen(y)));
	}
	return 0;
}