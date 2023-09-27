#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int w,n;
	int a,b;

	cin >> w >> n;

	int h[w];

	for(int i = 0;i < w;i++){
		h[i] = i+1;
	}
	for(int i = 0;i < n;i++){
		scanf("%d,%d",&a,&b);
		swap(h[a-1],h[b-1]);
	}

	for(int i = 0;i < w;i++){
		cout << h[i] << endl;
	}
}