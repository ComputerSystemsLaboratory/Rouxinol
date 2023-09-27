
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0511

#include <algorithm>
#include <iostream>
#include <vector>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//テ」ツδ榲」ツつッテ」ツδュテ・ツョツ堙ァツセツゥ
#define ALL(v) (v).begin(),(v).end()
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); ++i)
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define SORT(x) sort(begin(x),end(x))
#define SELECT_SORT(x, n) sort(begin(x),begin(x)+n)
#define SWAP(type, a, b) do {type tmp = a; a = b; b = tmp;} while (0)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))

//テ・ツョツ堙ヲツ閉ー
#define INF 2000000000000
#define MAX 10

//DEBUGテァツ板ィ
#define BAR() cout << "----------------------------" << endl;
#define DUMP(v) (cerr << #v << ": " << v << endl)
#define PRINT(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;


int main()
{
	int check[31]={0};
	
	int tmp=0;
	rep(i,28){
		cin >> tmp;
		check[tmp]=1;
	}
	
	REP(i,1,31){
		if(check[i]==0){
			cout << i << endl;
		}
	}
	
}