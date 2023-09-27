#include <cstdio>

int s_to_num(char c){
	if(c == 'S'){return 0;}
	if(c == 'H'){return 1;}
	if(c == 'C'){return 2;}
	if(c == 'D'){return 3;}
	else return -1;
}

char num_to_s(int i){
	char r[]={'S','H','C','D'};
	return r[i];
}

int main(){
	unsigned n,r;
	char s;
	bool isExist[4][13];

	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			isExist[i][j]=false;
		}
	}

	scanf("%u",&n);
	for(int i=0;i<n;i++){
		scanf("\n%c %u",&s,&r);
		isExist[s_to_num(s)][r-1]=true;
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			if(!isExist[i][j]){printf("%c %d\n",num_to_s(i),j+1);}
		}
	}
}