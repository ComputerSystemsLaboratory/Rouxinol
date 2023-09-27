#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
int n,a,b;
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	while(cin>>a>>b){
		
		
		n=a+b;
		int counter=0;
		while(n){
			n=n/10;
			counter++;
		}
		cout<<counter<<"\n";		
	}

	return 0;
}