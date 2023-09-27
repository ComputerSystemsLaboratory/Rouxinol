#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

#define open 1
#define close 0

int search;
bool key;

void judge(int N, int M, char U[300][12], char T[300][12])
{
	for(int j = 0; j < M; j++){
		for(int i = 0; i < N; i++){
			if(strcmp(U[i], T[j]) == 0){
				if(key == close){
					cout << "Opened by ";
					printf("%s\n", T[j]);
					key = open;
				}
				else if(key == open){
					cout << "Closed by ";
					printf("%s\n", T[j]);
					key = close;
				}
				search = true;
			}
		}
		if(search == false){
			cout << "Unknown ";
			printf("%s\n", T[j]);
		}
		search = false;
	}
}
			

int main()
{
	int N, M;
	char U[300][12];
	char T[300][12];
	
	while(scanf("%d", &N) != EOF){
		for(int i = 0; i < N; i++){
			cin >> U[i];
		}
		cin >> M;
		for(int i = 0; i < M; i++){
			cin >> T[i];
		}
		key = close;
		judge(N, M, U, T);		
	}
	return 0;
}