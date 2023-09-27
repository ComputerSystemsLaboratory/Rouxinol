#include<stdio.h>
#include<stack>
#include<iostream>
#include<string>
using namespace std;

int n = 0;//pointing at number of line
int u = 0;//number of top
int k[101];//output order(connect)
int v[101][101];//number of top
int Short[101] = { 0 };//Short(d[v])
//into n = 0;//element count
int p = 0;//Pointer
int fptr = 0;
int lptr = 0;
int x1[10000];
int y1[10000];
void Enqueue(int y, int x)
{
	x1[lptr] = x;//top of number
	y1[lptr] = y;//shortest
	lptr = (lptr + 1) % 10000;
}
void bfs(int l) {
	int i;
	while (fptr!=lptr) {
		l=x1[fptr];
		p=y1[fptr];
		fptr = (fptr + 1) % 10000;
		if(Short[l]!=-1){
			continue;
		}
		for(i=0;i<k[l];i++){
			if(v[l][i]){
				Enqueue(p+1,v[l][i]);
			}
		}
		//Enqueue(v[l][in]);
		Short[l]=++p;
	}
}
int main()
{
	int i;
	int j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> u;
		cin >> k[u];
		for (j = 0; j < k[u]; j++) {
			cin >> v[u][j];
		}
	}
	Enqueue(-1,1);
	for(i=0;i<n+1;i++){
		Short[i]=-1;
	}
	bfs(0);
	
	for (i = 1; i < n + 1; i++) {
		cout << i << " " << Short[i] << endl;
	}
}
