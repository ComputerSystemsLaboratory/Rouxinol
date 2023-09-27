#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<functional>
#include<vector>
#include<queue>
using namespace std;
#define f(i,n) for(int i=0;i<(int)n;i++)
#define MOD 1000000009
struct dice{
	int up;
	int down;
	int east;
	int west;
	int north;
	int south;
};
dice a;
char s[101]="NNNNENWNNNNENWNNNNENWNNNNENWENNNNWWNNNNE";
int x;
void input(void){
	scanf("%d", &x);
	a.up = x;
	scanf("%d", &x);
	a.south = x;
	scanf("%d", &x);
	a.east = x;
	scanf("%d", &x);
	a.west = x;
	scanf("%d", &x);
	a.north = x;
	scanf("%d", &x);
	a.down = x;
}
void nr(void){
			x = a.north;
			a.north = a.up;
			a.up = a.south;
			a.south = a.down;
			a.down = x;
			return;
}
void sr(void){
			x = a.south;
			a.south = a.up;
			a.up = a.north;
			a.north = a.down;
			a.down = x;
			return;
}
void er(void){
	x = a.east;
	a.east = a.up;
	a.up = a.west;
	a.west = a.down;
	a.down = x;
	return;
}
void wr(void){
	x = a.west;
	a.west = a.up;
	a.up = a.east;
	a.east = a.down;
	a.down = x;
	return;
}
int main(void){
	int n;
	int q;
	int c, d;
	input();
	n = strlen(s);
	scanf("%d", &q);
	f(qq, q){
		scanf("%d %d", &c, &d);
		f(i, n){
			if (s[i] == 'N'){
				nr();
			}
			else if (s[i] == 'S'){
				sr();
			}
			else if (s[i] == 'E'){
				er();
			}
			else if (s[i] == 'W'){
				wr();
			}
			if (a.up == c&&a.south == d)break;
		}
		printf("%d\n",a.east);
	}

	return 0;
}