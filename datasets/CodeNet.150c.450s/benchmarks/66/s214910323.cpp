#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

struct Info{
	char ID[11];
};

enum Door{
	CLOSE,
	OPEN
};

bool strCmp(char* base, char* comp){
	int length1 = 0,length2 = 0;
	for(int i=0;base[i] != '\0'; i++)length1++;
	for(int i=0;comp[i] != '\0'; i++)length2++;
	if(length1 != length2)return false;

	for(int i=0;base[i] != '\0'; i++){
		if(base[i] != comp[i])return false;
	}
	return true;
}

int main(){

	int N,M;
	bool FLG;
	scanf("%d",&N);
	Info info[N];

	for(int i = 0; i < N; i++)scanf("%s",info[i].ID);

	Door door = CLOSE;
	char tmp[11];

	scanf("%d",&M);

	for(int i = 0; i < M; i++){
		scanf("%s",tmp);
		FLG = false;
		for(int k = 0; k < N; k++){
			if(strCmp(tmp,info[k].ID)){
				FLG = true;
				break;
			}
		}
		if(FLG){
			if(door == CLOSE){
				printf("Opened by %s\n",tmp);
				door = OPEN;
			}else{
				printf("Closed by %s\n",tmp);
				door = CLOSE;
			}
		}else{
			printf("Unknown %s\n",tmp);
		}
	}

	return 0;
}