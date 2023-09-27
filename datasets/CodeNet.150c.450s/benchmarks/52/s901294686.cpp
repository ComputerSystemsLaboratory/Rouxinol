#include<cstdio>
#include<cmath>
 
//#include<iostream>
using namespace std;
 
int main(){
int i=0, j, ar[11];

	while( scanf("%d" , &j)!= EOF){
		if(j!=0)	ar[++i]=j;
		else 		printf("%d\n",ar[i--]);
	}

    return 0;
}