#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <queue>
#include <cmath>
#include <stack>

#define int64 long long int

using namespace std;

int main()
{
	int a[4], b[4], hit, blow;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		hit = blow = 0;
		for(int i=0; i<4; i++){
			if(b[i] == a[i]) hit++;
			for(int j=0; j<4; j++){
				if(j != i){
					if(b[i] == a[j]) blow++;
				}
			}
		}
		cout << hit << ' ' << blow << '\n';
	}
	return 0;
}