#include<iostream>
#define N 51
using namespace std;

int w, h, ans = 0, map[N][N];

void search_zahyou(int w, int h);

int main(){
	while(cin >>w >>h){
		ans = 0;
		if(w == 0 && h == 0) break;
		for(int i = 0; i < h; i++){
			for(int k = 0; k < w; k++){
				cin >>map[i][k];
			}
		}
		for(int i = 0; i < h; i++){
			for(int k = 0; k < w; k++){
				if(map[i][k] == 0){
					continue;
				}
				else{
					ans++;
					search_zahyou(i, k);
				}
			}
		}
		cout <<ans <<endl;
	}
	return 0;
}

void search_zahyou(int inh, int inw){
	int searchh[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, searchw[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
	if(h <= inh || w <= inw || inh < 0 || inw < 0){
	} else{
		map[inh][inw] = 0;
		for(int i = 0; i < 8; i++){
			if(map[inh + searchh[i]][inw + searchw[i]] == 1){
				search_zahyou(inh + searchh[i], inw + searchw[i]);
			}
		}
	}
}