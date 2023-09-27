#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int data[31];
	int w,n;
	cin >> w >> n;
	for(int i=1;i<=w;i++)
		data[i] = i;
		
	while(n--){
		int a,b;
		scanf("%d,%d\n",&a,&b);
		swap(data[a],data[b]);
	}
	for(int i=1;i<=w;i++)
		cout << data[i] << endl;
}