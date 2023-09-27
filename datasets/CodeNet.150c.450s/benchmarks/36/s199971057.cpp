#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int d,s;
	while(scanf("%d",&d)!=EOF){
		s=0;
		for(int i=1;i<600/d;i++)s+=d*d*d*i*i;
		cout<<s<<endl;
	}
}