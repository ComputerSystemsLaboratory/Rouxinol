#include <iostream>
#include<cstdio>
using namespace std;

int count[101]={0};

int main() {
	int n;
	while(scanf("%d",&n) != EOF){
		count[n] = count[n] + 1;
	}
	int max=count[1];
	for(int i=2;i<=100;i=i+1){
		if(count[i] > max){
			max = count[i];
		}
	}
	for(int i=1;i<=100;i=i+1){
		if(count[i] == max){
			cout << i << endl;
		}
	}
	
	return 0;
}