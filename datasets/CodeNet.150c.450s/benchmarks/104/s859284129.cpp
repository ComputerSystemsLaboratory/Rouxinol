#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int w,n,i;
	cin >> w; cin >> n;
	int vertical_bar[w];
	// 配列を初期化
	for(i=0;i<w;i++){
		vertical_bar[i] = i+1;
	}
		
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d, %d", &a,&b);
		swap(vertical_bar[a-1], vertical_bar[b-1]);
	}
	
	for(i=0;i<w;i++){
		cout << vertical_bar[i] <<endl;
	}
	
	return 0;
}