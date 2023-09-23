#include <iostream>
#include <algorithm>
//#include <array>
#include <stdbool.h>
using namespace std;
bool mod[10000];


void find(int a,int b,int c){
	int m =2;
	for(m=a;m<=b;m++){
		if(c%m==0){
			mod[m]=1;
			continue;
		}
	}
	int i;
	int s=0;
	for(i=0;i<=10000;i++){
		if(mod[i]==1)s++;
	}
	cout <<s <<endl;
	
}
int main(){
	int a,b,c;
	cin >>a >>b >>c;
	fill(mod,mod+10000,0);
	find(a,b,c);
	return 0;
}