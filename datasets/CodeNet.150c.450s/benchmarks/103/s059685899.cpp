#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <list>
#include <functional>
#include <algorithm>

using namespace std;

int cnt_i(int n, int s, bool ns[],int d,int sum,int m){
//    if(n>d+1) return 0;
    if(s<sum) return 0;
    if(n==d+1 && s == sum) return 1;
    if(n==d+1) return 0;
    int tmp(0);
    for(int i(m+1);i<=9;++i){
//	if(!ns[i]){
	    auto cpns=ns;
	    cpns[i]=1;
	    tmp += cnt_i(n,s,cpns,d+1,sum+i,i);
//	}
    }
    return tmp;
}
    
// int cnt_i2(int n, int s, bool ns[],int d,int sum,int m){
//     int tmp=0;
//     for(int i(m+1);i<=9;++i)
// 	tmp += cnt_i(n,s,ns,d+1,sum+i,m);

int cnt(int n, int s){
    bool ns[10] = {0,0,0,0,0,0,0,0,0,0};
    return cnt_i(n,s,ns,-1,0,-1);
}
    

int main(int, char**){
    int n,s;
    while(1){
	cin >> n >> s;
	if(n==0&&s==0) break;
	cout << cnt(n,s) << endl;
    }
    return 0;
}