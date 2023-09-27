#include <cstdio>
#include <iostream>

#define N_MAX 10000
#define Q_MAX 100000
//#define NIL -1
#define UNITE 0
#define SAME 1
using namespace std;

int N,Q;
int num_array[N_MAX+1];//0オリジン．



int main(){
	scanf("%d %d",&N,&Q);
	for(int i = 0;i < N_MAX;i++)
		num_array[i] = i;//iはグループ番号

	//クエリごとの処理
	int query;
	int x,y;
	int p1,p2;
	int cnt1,cnt2;
	for(int q = 0;q < Q;q++){
		scanf("%d %d %d",&query,&x,&y);

		p1 = x;
		p2 = y;
		cnt1 = 0;
		cnt2 = 0;
		while(num_array[p1] != p1){
			p1 = num_array[p1];
			cnt1++;
		}
		while(num_array[p2] != p2){
			p2 = num_array[p2];
			cnt2++;
		}

		if(query == UNITE){
			if(cnt1 > cnt2){
				num_array[p1] = p2;
			}else{
				num_array[p2] = p1;
			}

		}else if(query == SAME){
			if(p1 == p2) printf("1\n");
			else printf("0\n");
		}else{
			cout <<"error" <<endl;
			return 0;
		}
	}

	return 0;
}