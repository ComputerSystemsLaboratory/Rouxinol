// ハッシュ法について
// http://takatakamanbou.hatenablog.com/entry/2015/04/11/155405

#include <stdio.h>
#include <string.h>

#define MAX 1046527 // 最大入力行数 1000000 だからか
#define LENGTH 14 // 文字列の長さが12だからか

//charの2次元配列について
// http://ratan.dyndns.info/MicrosoftVisualC++/tajigenchar.html
char Hash[MAX][LENGTH];

int getChar(char ch)
{
	if( ch == 'A' ) return 1;
	else if( ch == 'C' ) return 2;
	else if( ch == 'G' ) return 3;
	else if( ch == 'T' ) return 4;
	else return 0;
}

// long long int型
// https://www.wdic.org/w/TECH/long%20long
long long getKey(char str[])
{
	long long sum = 0, p = 1, i;
	for ( i = 0; i < strlen(str); i++) {
		sum += p*(getChar(str[i]));
		p *= 5;
	}
	return sum;
}

int h1(int key){ return key % MAX; }
int h2(int key){ return 1 + (key % (MAX - 1)); }
long long hash(int key, int i) { return (h1(key) + i * h2(key)) % MAX; }

int find(char str[])
{
	long long key, i, h;
	key = getKey(str);
	// printf("%llu\n", key);
	for (i = 0;; i++)
	{
		h = hash(key, i);
		// printf("%llu\n", h);
		// printf("%s\n", Hash[h]);
		// strcmp .. 文字列の比較 一致したら0
		if( strcmp(Hash[h], str) == 0 ) return 1;
		// strlen .. 文字列の長さ
		else if( strlen(Hash[h]) == 0 ) return 0;
	}
	return 0;
}

int insert(char str[])
{
	long long key, i, h;
	key = getKey(str);
	for (i = 0;; i++)
	{
		h = hash(key, i);
		if( strcmp(Hash[h], str) == 0 ) return 1;
		else if( strlen(Hash[h]) == 0 ) {
			// strをHash[h]にコピーする
			strcpy(Hash[h], str);
			return 0;
		}
	}
	return 0;
}

int main()
{
	int i, lines;
	char string[LENGTH], command[9];
	// 初期化処理
	// https://teratail.com/questions/22786
	for( i = 0; i < MAX; i++ ) Hash[i][0] = '\0';
	scanf("%d", &lines); // 入力行数
	for (i = 0; i < lines; i++)
	{
		scanf("%s %s", command, string); // ex ) command ... insert string ... ACA
		if (command[0] == 'i') {
			insert(string);
		} else {
			if(find(string)) {
				printf("yes\n");
			} else {
				printf("no\n");
			}
		}
	}
	return 0;
}
