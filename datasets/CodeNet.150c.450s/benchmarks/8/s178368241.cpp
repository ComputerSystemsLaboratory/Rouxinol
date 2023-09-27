#include<stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
	string t, h;
	int n,i,tp=0,hp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		cin >> t >> h;
		if(t>h)tp+=3;
		else if(t<h)hp+=3;
		else {
			tp+=1;
			hp+=1;
		}
	}
	printf("%d %d\n",tp,hp);
	return 0;
}