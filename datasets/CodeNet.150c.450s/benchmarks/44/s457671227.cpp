#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int a[4],b[4],h,bl;
	while(scanf("%d %d %d %d\n%d %d %d %d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3])!=EOF){
		h=0;bl=0;
		for(int i=0;i<4;i++){
			if(a[i]==b[i])h++;
			else for(int j=0;j<4;j++)if(a[i]==b[j])bl++;
		}
		cout<<h<<" "<<bl<<endl;
	}
}