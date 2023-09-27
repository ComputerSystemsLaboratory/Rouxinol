#include<iostream>
#include<cstdio>
using namespace std;
inline void swap(int amida[], int a, int b){
	int tmp = amida[a];
	amida[a] = amida[b];
	amida[b] = tmp;
}
int main(){
	int amida[40];
	int w,n,a=0,b=0;
	for(int i=0; i<40; i++)
		amida[i] = i;
	cin >> w >> n;
	for(int i=0; i<n; i++){
		scanf("%d,%d",&a,&b);
		swap(amida,a,b);
	}
	for(int i=1; i<=w; i++)
		cout << amida[i] << endl;
	
	return 0;
	
}