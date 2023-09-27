#include<iostream>
#include<cstdio>
#include<ctime>

using namespace std;

//math
//------------------------
template<class T>inline T sqr(T x){ return x*x; };



int a,b;


void solve(int a,int b){
	if (a < b){
		cout << "a < b" << endl;
	}
	else if (a == b){
		cout << "a == b" << endl;
	}
	else{
		cout << "a > b" << endl;
	}
}






int main(){
	//std::clock_t start = clock();
	std::cin >> a>>b;
	solve(a, b);
	//printf("time is %d",(clock()-static_cast<double>(start)/CLOCKS_PER_SEC));
}