#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char wo[1000][32], fa[32], len[32];
	int cnt = 0, maxlen = -1, nfwo = -1;
	while(cin >>wo[cnt]){
		cnt++;
	}
	for(int i = 0; i < cnt; i++){
		int cntwo = 0;
		for(int j = 0; wo[i][j] != '\0'; j++){
			cntwo++;
		}
		if(cntwo > maxlen){
			maxlen = cntwo;
			int k = 0;
			for(k = 0; wo[i][k] != '\0'; k++){
				len[k] = wo[i][k];
			}
			len[k] = '\0';
		}
		int cntnfwo = 0;
		for(int j = 0; j < cnt; j++){
			if(strcmp(wo[i], wo[j]) == 0){
				cntnfwo++;
			}
		}
		if(cntnfwo > nfwo){
			nfwo = cntnfwo;
			int k = 0;
			for(k = 0; wo[i][k] != '\0'; k++){
				fa[k] = wo[i][k];
			}
			fa[k] = '\0';
		}
	}
	cout <<fa <<" " <<len <<endl;
	return 0;
}