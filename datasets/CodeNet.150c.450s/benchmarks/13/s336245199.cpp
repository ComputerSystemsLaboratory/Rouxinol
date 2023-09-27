#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	
	char s[101], p[101], loop[201];  /* loopは語尾から先頭に戻る文字列を考える */
	scanf("%s", s);
	scanf("%s", p);
	scanf("%s", loop);

	/* loopは語尾から先頭に戻る文字列を作る */
	strcpy(loop, s);
	strcat(loop, s);

	/* loopした文字列の中に文字列pがあるか探す */
	if( strstr(loop, p) == NULL ) printf("No\n");
	else printf("Yes\n");

	return 0;
}

/********************************************************************************************************************/

//ここからstrcpy(char ○, char △)とstcat(char ○, char △)について説明
// A={xyz},B={abcdef} 
// strcpy(A, B) 文字列A={xyz}の中にB={abcdef} の文字列をコピーする ⇒ A={abcdef} になる。
// stcat(A, B) 文字列A={xyz}の中にB={abcdef} の文字列を連結する ⇒ A={xyzabcdef} になる。

//ここからstrstr(char ○, char △)について説明
// strstr(B, abc) 文字列B={abcdef}の中にabcから始まる文字列を探し出力する ⇒ abcdefを出力。
// strstr(B, a) 文字列B={abcdef}の中にaから始まる文字列を探し出力する ⇒ abcdefを出力。
// strstr(B, af) 文字列B={abcdef}の中にafから始まる文字列を探し出力する ⇒ NULLを出力。 ※見つからい場合はNULLを出力
// strstr(B, 123) 文字列B={abcdef}の中に123から始まる文字列を探し出力する ⇒ NULLを出力。 ※見つからい場合はNULLを出力

/********************************************************************************************************************/
