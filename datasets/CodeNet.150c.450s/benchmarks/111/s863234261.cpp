#include<iostream>

using namespace std;

int N, a, i;
long long ans[21], memo[21];

void Initialization(){
	for(int j= 0; j< 21; j++){
		memo[j]= 0;
		ans[j]= 0;
	}
}

void memoinitial(){
	for(int j= 0; j< 21; j++)
		memo[j]= 0;
}

void Calc(int x){

	if(i== 0)
		ans[x]++;
	else{
		for(int j= 0; j< 21; j++){
			if(ans[j]!= 0){
				if(0<= j+ x && j+ x<= 20)
					memo[j+ x]+= ans[j];
				if(0<= j- x && j- x<= 20)
					memo[j- x]+= ans[j];
			}
		}
		for(int j= 0; j< 21; j++)
			ans[j]= memo[j];
		memoinitial();
	}
}
void Input(){
	cin>> N;
	Initialization();
	for(i= 0; i< N; i++){
		cin>> a;
		if(i!= N- 1)
			Calc(a);
	}
}

void disp(){
	cout<< ans[a]<< endl;
}

int main(){
	Input();
	disp();
}