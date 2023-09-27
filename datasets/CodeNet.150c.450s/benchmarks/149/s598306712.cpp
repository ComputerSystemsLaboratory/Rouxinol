#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
#include <string.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;

enum Loc{
	Left,
	Right,
	Top,
	Bottom,
};

int N;
int* boss,*height;

//??????????????????index?????????????????????????????§??????????????¢??°
int get_boss(int id){
	if(boss[id] == id)return id; //???????????£??¨??????????????????????????????
	else{
		return boss[id] = get_boss(boss[id]); //??£??¨??§????????????????????????????±??????????????????£??¨??????????????????????????§???
	}
}

int isSame(int x,int y){
	return get_boss(x) == get_boss(y);
}

void unite(int x,int y){
	int boss_x = get_boss(x);
	int boss_y = get_boss(y);

	//??¢???????????°??????????????????????????????
	if(boss_x == boss_y)return;

	//?????????????????????????????????
	if(height[x] > height[y]){

		boss[boss_y] = boss_x;

	}else if(height[x] < height[y]){

		boss[boss_x] = boss_y;

	}else{ //height[x] == height[y]

		boss[boss_y] = boss_x;
		height[x]++;
	}
}

int main(){

	int Q,command,x,y;

	scanf("%d %d",&N,&Q);

	boss = new int[N];
	height = new int[N];

	for(int i = 0; i < N; i++){
		boss[i] = i;
		height[i] = 1;
	}

	for(int i = 0; i < Q; i++){
		scanf("%d %d %d",&command,&x,&y);

		if(command == 0){ //unite??????
			unite(x,y);
		}else{
			if(isSame(x,y)){
				printf("1\n");
			}else{
				printf("0\n");
			}
		}
	}

	return 0;
}