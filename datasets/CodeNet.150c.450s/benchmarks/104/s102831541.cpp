#include <iostream>
using namespace std;
void change(int num[],int a, int b)
{
	int tmp = num[a];
	num[a] = num[b];
	num[b] = tmp;
}
int main()
{
	int w,n;
	int order[30]={0};
	cin >> w >> n;
	for(int i=0; i < w; i++){
		order[i] = i;
	}
	while(n--){
		int a,b;
		scanf("%d , %d ", &a, &b);
		change(order, a-1, b-1);
	}
	for(int i=0; i< w; i++){
		cout << order[i]+1 << endl;
	}
	return 0;
}