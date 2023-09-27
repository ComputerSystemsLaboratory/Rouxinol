#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <vector>
using namespace std;
const int INF = 0x3f3f3f3f;
const int m = 1046527;

char M[m][15];

int h1(int key) { return key % m; }
int h2(int key) { return 1 + key % (m - 1); }
int h(int key, int i) { return (h1(key) + i * h2(key)) % m; }

long long getKey(char s1[])
{
	long long key = 0;
	int p = 1;
	for(int i = 0; i < strlen(s1); i++){
		if(s1[i] == 'A') key += 1 * p;
		else if(s1[i] == 'C') key += 2 * p;
		else if(s1[i] == 'G') key += 3 * p;
		else if(s1[i] == 'T') key += 4 * p;
		p *= 5;
	}
	return key;
}

void insert(char s1[]){
	int i = 0;
	while(true){
		if(!strlen(M[h(getKey(s1), i)])){
			strcpy(M[h(getKey(s1), i)], s1);
			break;
		}
		i++;
	}
}

void find(char s1[]){
	int i = 0, flag = 0;
	while(i < m && strlen(M[h(getKey(s1), i)])){
		if(!strcmp(M[h(getKey(s1), i)], s1)){
			flag = 1;
			break;
		}
		i++;
	}
	if(flag)
		printf("yes\n");
	else
		printf("no\n");
}

int main(){
	int n;
	char s1[10], s2[15];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s1 >> s2;
		if(s1[0] == 'i')
			insert(s2);
		else
			find(s2);
	}
	return 0;
}