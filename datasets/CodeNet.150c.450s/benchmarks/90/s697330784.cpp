#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int t[250000]={0},m=0,n;
	while(cin>>n){
		t[n]++;
		if(t[n]>m)m=t[n];
	}
	for(int i=0;i<250000;i++){
		if(t[i]==m)cout<<i<<endl;
	}
}