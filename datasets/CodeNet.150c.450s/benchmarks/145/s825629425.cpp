#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include <map>

using namespace std;

const int M = 33;
const int N = 333001;

char text[N];
char word[N][M];
char tmp[N], ansm[N], ansl[N]; 

int cmp(const void *a, const void *b) {
	return strcmp((char *)a, (char *)b);
}

void solve(int k) {
/*	int len = strlen(text);
	for (int i=0; i<len; ++i) {
		if (text[i] >= 'A' && text[i] <= 'Z') text[i] = text[i] - 'A' + 'a';
	}
	int j = 0, k = 0;
	for (int i=0; i<len; ++i) {//分解文章 
		if (text[i] != ' ') word[k][j++] = text[i];
		else {
			if (j == 0) continue;
			word[k++][j] = '\0', j = 0;
		}
	}
	if (j) word[k++][j] = '\0';*/
	qsort(word, k, sizeof(word[0]), cmp);
//	for (int i=0; i<k; ++i) printf ("%s\n", word[i]);
	int maxs = -1;
	int cnt = 1;
	strcpy(tmp, word[0]);
	strcpy(ansl, word[0]);
	int maxl = strlen(word[0]);
	for (int i=1; i<k; ++i) {
		if (maxl < strlen(word[i])) maxl = strlen(word[i]), strcpy(ansl, word[i]);
		if (!strcmp(tmp, word[i])) ++cnt;
		else {
			if (maxs < cnt) {
				maxs = cnt;
				strcpy(ansm, tmp);
			}
			cnt = 1;
			strcpy(tmp, word[i]);
		}
	}
	if (maxs < cnt) strcpy(ansm, tmp);
}

int main() {
//	cin.getline(text, N, '\n');
//	while (cin.getline(text, N, '\n')) {
//		solve(text);
//		cout<<ansm<<" "<<ansl<<endl;
//	}
	int i = 0;
//	printf ("%d\n", strcmp("AAAA", "aaaa"));
	while (scanf("%s", word[i++]) != EOF);
//	solve(word)
	solve(i);
	cout<<ansm<<" "<<ansl<<endl;
//	system("PAUSE");
/*	map<string,int> data;
	string ans1,ans2,str;
	while(cin >> str){
		data[str]++;
		if(data[ans1] < data[str]) ans1 = str;
		if(ans2.size() < str.size() ) ans2 = str;
	}
	cout << ans1 << " " << ans2 << endl;*/
	return 0;
}






/*
#include <map>
using namespace std;

int main(){
	map<string,int> data;
	string ans1,ans2,str;
	while(cin >> str){
		data[str]++;
		if(data[ans1] < data[str]) ans1 = str;
		if(ans2.size() < str.size() ) ans2 = str;
	}
	cout << ans1 << " " << ans2 << endl;
}
*/