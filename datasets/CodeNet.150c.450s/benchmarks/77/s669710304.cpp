#include <iostream>
#include<stdio.h>
using namespace std;

void ini(int* p,int n);
void print(int *p);
void check(int *p);
bool judge(int *p);

int main(){
  int n;
  while(1){
    bool ans;
    cin >> n;
    if(n == 0) break;
    int state[21];
    for(int i = 0; i<21 ; i++){
      state[i] = 0;
    }
    
    ini(state,n);
    //print(state);
    check(state);
    ans = judge(state);
    if(ans == 0) printf("Yes\n");
    else printf("No\n");
    //print(state);
  }
  return 0;
}


void ini(int* state,int n){
  int x, y;
  int mask;
  for(int i = 0; i<n; i++){
    cin >>x >> y;
    mask = (04000000 >> x);
    state[y] =( state[y] | mask);
  }
}

void check(int* state){
  int n;
  char dir;
  int step;
  int nowx = 10, nowy = 10;
  int mask;
  
  cin >> n;
  for(int i  = 0;  i< n; i++){
    //printf("x = %d y = %d",nowx, nowy);
    cin >>dir >> step;
    // printf("%c %d\n",dir,step);
    switch(dir){
    case 'N':
      mask = ~(04000000 >>nowx);
      for(int j = 0; j<step; j++){
	nowy ++;
	//printf("%d\n",nowy);
	state[nowy] = (state[nowy] & mask);
      }
      break;
    case 'S':
      mask = ~(04000000 >>nowx);
      for(int j = 0; j<step; j++){
	nowy --;
	state[nowy] = (state[nowy] & mask);
      }
      break;
    case 'E':
      for(int j = 0; j<step; j++){
	nowx ++;
	mask = ~(04000000 >>nowx);
	state[nowy] = (state[nowy] & mask);
      }
      break;
    case 'W':
      for(int j = 0; j<step; j++){
	nowx --;
	mask = ~(04000000 >>nowx);
	state[nowy] = (state[nowy] & mask);
      }
      break;
    }
  }
}

bool judge(int *state){
  for(int i = 0; i< 21; i++){
    if(state[i] != 0) return 1;
  }
  return 0;
}


	
void print(int *p){
  for(int i = 0; i<21; i++){
    printf("[ %d] %o\n",i,p[i]);
  }
}