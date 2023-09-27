#include <stdio.h>
int main(void){
	char chara[1200];//文字列
	int count[26];//文字のカウント配列
	//初期化
	for(int i=0;i<1200;i++)chara[i]=0;
	for (int i = 0; i<26; i++)count[i] = 0;
	//コンソール読み込み
	while(fgets(chara, sizeof(chara), stdin) != NULL){
    	for (int i = 0; i < sizeof(chara);i++) {
    		int ch = chara[i];
    		if (ch < 65 || ch >122)continue;
    		if (ch >= 97 && ch <= 122)ch = ch - 32;//小文字を大文字に
    		count[ch - 65]+=1;
    	}
		for(int i=0;i<1200;i++)chara[i]=0;//初期化
    }
	for (int i = 0; i < sizeof(count) / 4; i++){
		printf("%c : %d\n", 97+i, count[i]);
	}
	return 0;
}