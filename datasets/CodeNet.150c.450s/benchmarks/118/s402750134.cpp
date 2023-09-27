#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int solve(int Y,int M, int D){
	int res;

	res=0;

	//ひと月目
	if(Y%3==0 || M%2!=0){//20notoki
		for(int dd=D;dd<=20;dd++) res++;
	}
	else{//19notoki
		for(int dd=D;dd<=19;dd++) res++;
	}

	//二つ決め以降
	for(int mm=M+1;mm<=10;mm++){
		if(Y%3==0){
			for(int dd=1;dd<=20;dd++) res++;
		}
		else{
			if(mm%2==0){
				for(int dd=1;dd<=19;dd++) res++;
			}
			else{
				for(int dd=1;dd<=20;dd++) res++;
			}
		}
	}

	for(int yy=Y+1;yy<1000;yy++){
		for(int mm=1;mm<=10;mm++){
			if(yy%3==0){
				for(int dd=1;dd<=20;dd++){
					res++;
				}
			}
			else{
				if(mm%2==0){
					for(int dd=1;dd<=20;dd++){
						res++;
					}
				}
				else{
					for(int dd=1;dd<=19;dd++){
						res++;
					}
				}

			}
		}
	}


	return res;
}


int main(void){

	int n;
	int Y,M,D;

	while(true){
		cin >> n;
//		if(n==0) return 0;
		
		for(int i=0;i<n;i++){
			cin >> Y;
			cin >> M;
			cin >> D;

			cout << solve(Y,M,D) << endl;
		}
		return 0;
	}

	return 0;
}