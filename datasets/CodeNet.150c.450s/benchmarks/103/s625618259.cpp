#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<functional>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)


int n,s,c=0;

void f(int i,int sum,int t){

if(0<=i && i<=9){
sum+=i;
t++;
}

if(t==n)
if(sum==s) c++;

if(0<=i && i<=8){
REP(j,i+1,9) f(j,sum,t);
}


}

int main(){

while(true){

cin >> n >> s;
if(n==0 && s==0) break;


REP(i,0,9) f(i,0,0);

cout << c << endl;

c=0;

}

	return 0;
}