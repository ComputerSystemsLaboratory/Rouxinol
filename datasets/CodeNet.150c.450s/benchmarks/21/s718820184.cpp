#include<iostream>
#include<cstdio>
#include<ctime>


//math
//------------------------
template<class T>inline T sqr(T x){ return x*x; };



int x;


int solve(int x){
	return sqr(x)*x;
}






int main(){
	std::clock_t start = clock();
	std::cin >> x;
	printf("%d\n",solve(x));
	//printf("time is %d",(clock()-static_cast<double>(start)/CLOCKS_PER_SEC));
}