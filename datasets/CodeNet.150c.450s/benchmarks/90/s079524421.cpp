#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
	int n;
	int a[101]={0};

	while(cin>>n){
        a[n]++;
	}
	int b=0;
    for(int i=0;i<100;i++){
        b=max(a[i],b);
    }
    for(int i=0;i<100;i++){
        if(a[i]==b)cout<<i<<endl;
    }
	return 0;
}