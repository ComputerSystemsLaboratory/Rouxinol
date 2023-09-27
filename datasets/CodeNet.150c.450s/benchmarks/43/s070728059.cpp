#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <set>
#include <cmath>
#include <map>


int main(int,char**){
	int n;
	int a,b;
	while(std::cin >> n){
		if(!n) break;
		int aScore(0),bScore(0);
		while(n--){
			std::cin >> a>>b;
			if(a==b) 
				aScore+=a,bScore+=b;
			else if(a>b)
				aScore+=(a+b);
			else 
				bScore+=(a+b);
		}
		std::cout << aScore << ' ' << bScore << std::endl;
	}
	return 0;
}