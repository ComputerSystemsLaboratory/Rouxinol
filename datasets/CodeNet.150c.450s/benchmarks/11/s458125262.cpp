#include <iostream>

using namespace std;
int main(void){
	int card[4][13]={0};
	char mark[4] = {'S','H','C','D'};
	int num;
	int a,b;
	char m;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>m>>b;
		for(int j=0;j<4;j++){
			if(m==mark[j]){
				a=j;
				break;
			}
		}
		card[a][b-1]++;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			if(card[i][j]==0)
				cout<<mark[i]<<" "<<j+1<<endl;
		}
	}
	return 0;
}