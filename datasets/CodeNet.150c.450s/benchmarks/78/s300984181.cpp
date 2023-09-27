#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#include<utility>
#include<queue>
#define pi 3.14159
#define Inf (int)pow(2., 12.)

using namespace std;
typedef std::pair<int, int> mypair;
queue<mypair> qu;
#define M 1000000
 
int odd[M+10], all[M+10];
 
void update(int *ar, int x){
    for(int i = x; i <= M; ++i){
        ar[i] = min(ar[i], ar[i - x] + 1);
    }
}
 
int main(){
	odd[0] = all[0] = 0;
    for(int i = 1; i <= M; ++i){
        odd[i] = all[i] = 10000000;
    }
 
    for(int i = 1; ; ++i){
        int x = i * (i + 1) * (i + 2) / 6;
        if(x > M) break;
        update(all, x);
        if(x % 2 == 1) update(odd, x); 
    }
     
    int n;
    while(1) {
		cin >> n;
		if(n == 0) break;
		cout << all[n] << " " << odd[n] <<endl;
	}
}