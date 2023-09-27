#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int ajou, asu, ari, aei, S ;/*A???????????????*/
	int bjou, bsu, bri, bei, T ;/*B???????????????*/
	scanf("%d%d%d%d", &ajou, &asu, &ari, &aei);
	scanf("%d%d%d%d", &bjou, &bsu, &bri, &bei);
	S = ajou + asu + ari + aei ;
	T = bjou + bsu + bri + bei ;
	if(S>T)
	{
		printf("%d\n",S);
	}else if(S<T){
		printf("%d\n",T);
	}else{
		printf("%d\n",S);
	}
	
	return 0;
}