#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

bool check(int x,int y,int z){
	if(x*x == y*y+z*z) return 1;
	else return 0;
}

int main(){
	int n;
	int a,b,c;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b >> c;
		if(a>=b && a>=c && check(a,b,c)) printf("YES\n");
		else if(b>=c && b>=a && check(b,c,a)) printf("YES\n");
		else if(c>=a && c>=b && check(c,a,b)) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}