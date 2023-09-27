#include<iostream>
#include<cstdio>
#include<ctime>


//math
//------------------------
template<class T>inline T sqr(T x){ return x*x; };



int a,b;


int solve1(int a,int b){
	return a*b;
}
int solve2(int a, int b){
	return 2 * (a + b);
}






int main(){
	std::clock_t start = clock();
	std::cin >> a >> b;
	printf("%d %d\n", solve1(a, b), solve2(a, b));
	//printf("time is %d",(clock()-static_cast<double>(start)/CLOCKS_PER_SEC));
}