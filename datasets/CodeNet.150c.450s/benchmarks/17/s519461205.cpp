#include <iostream> 
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	sort(a,a+5);
	for(int i=4;i>=0;i--)
		printf("%d%c",a[i],i==0?'\n':' ');
    return 0;
}