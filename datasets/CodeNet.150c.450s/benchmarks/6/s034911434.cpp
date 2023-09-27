#include<iostream>
#include<cstdio>
#include<ctime>

using namespace std;

//math
//------------------------
template<class T>inline T sqr(T x){ return x*x; };



int a, b, c;




void solve(int a, int b, int c){
	if (a < b && b < c){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}
	


int main(){
	//std::clock_t start = clock();
	scanf("%d %d %d", &a, &b, &c);
	solve(a, b,c);
	//printf("time is %d",(clock()-static_cast<double>(start)/CLOCKS_PER_SEC));
}