
#include <algorithm>
#include <iostream>
#include <vector>

#include <stdlib.h>

using namespace std;

#define rep(i,a,b) for(int i=(int)(a); i<(int)(b); ++i)
#define SORT(x, n) sort(begin(x),begin(x)+n)

#define INF 2000000000000

int calc(int value){
	if(value - 500 >= 0){
		return value - 500;
	}
	else if(value - 100 >= 0){
		return value - 100;
	}
	else if(value - 50 >= 0){
		return value - 50;
	}
	else if(value - 10 >= 0){
		return value - 10;
	}
	else if(value - 5 >= 0){
		return value - 5;
	}
	else{
		return value - 1;
	}
}

int main()
{
	int price, oturi;
	while(true)
	{
		cin >> price;
		if(price == 0){ break; }
		oturi = 1000 - price;
		
		int count=0;
		while(true)
		{
			oturi = calc(oturi);
			//cout << oturi << endl;
			count++;
			if(oturi == 0){ break; }
		}
		
		cout << count << endl;
	}
	
	/*
	for(auto a : W){
		cout << a << endl;
	}
	*/
	
}