#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

int nm=9;
int sum,j;
int su[5001]={0};

	while(1){
		cin >> nm;
		if(nm == 0) break;
		int mx = -999999999;
		rep(i,nm) cin >> su[i];
		rep(i,nm){
			sum=0;
			rep2(j,i,nm){
		 		sum += su[j];
				mx = max(mx,sum);
			}
		}
		cout << mx << endl;
	}
	return 0;
}