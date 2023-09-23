/*****include*****/
#include <iostream>
#include <fstream>

/*****デバッグ定義*****/
//#define DEBUG
#define INF 10000
/*****マクロ定義*****/

/*****名前空間*****/
using namespace std;

/*****グローバル変数置き場*****/
int Field[10][10];

/*****その他関数置き場*****/
int djikstra(int start,int townnum){
	int sum=0;
	int town;
	int *dis;
	bool *used;
	dis = new int [townnum];
	used = new bool [townnum];
	for(int i=0;i<townnum;i++){
		dis[i] = INF;
		used[i] = 0;
	}
	dis[start] = 0;
	while(true){
		town = -1;
		for(int i=0;i<townnum;i++){
			if(!used[i] && (town == -1 || dis[town] > dis[i])){
				town = i;
			}
		}
		if(town == -1)	break;
		used[town] = true;
		for(int i=0;i<townnum;i++){
			if(dis[i] > dis[town] + Field[town][i]){
				dis[i] = dis[town] + Field[town][i];
			}
		}
	}
	for(int i=0;i<townnum;i++){
		if(dis[i] != INF)	sum += dis[i];
	}
	delete used;
	delete dis;
	return sum;
}
/*****main関数*****/
int main(){
	/*****変数置き場*****/
	int appear[10];
	int townnum;
	int n;
	int from,to,cost;
	int now_cost;
	int min_cost;
	int min_town;
	/*****処理部*****/
	while(1){
		for(int i=0;i<10;i++){
			appear[i] = 0;
			for(int j=0;j<10;j++){
				Field[i][j] = INF;
			}
		}
		townnum = 0;
		
		min_cost = INF;
		min_town = INF;
		cin >> n;
		if(n==0)	break;
		for(int i=0;i<n;i++){
			cin >> from >> to >> cost;
			Field[from][to] = cost;Field[to][from] = cost;
			Field[from][from] = 0;Field[to][to] = 0;
			if(!appear[from]){
				appear[from] = 1;
				townnum++;
				//cout << townnum << endl;
			}
			if(!appear[to]){
				appear[to] = 1;
				townnum++;
				//cout << townnum << endl;
			}
		}
		//cout << "djikstra begin..." << endl;
		for(int start=0;start<townnum;start++){
			//cout << start << " " << townnum << endl;
			now_cost = djikstra(start,townnum);
			if(now_cost < min_cost){
				min_cost = now_cost;
				min_town = start;
			}
		}
		cout << min_town << " " << min_cost << endl;
	}
	/*****処理終了後*****/
	return 0;
}