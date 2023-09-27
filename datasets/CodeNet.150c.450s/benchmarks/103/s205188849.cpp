#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int test(int n, int s, int i){//n個でsを作る
	//cout << n <<" "<<s<<" "<<i<<endl;
	if(n==0){
		if(s==0){
			return 1;//作れた
		}else{
			return 0;
		}
	}
	if(i>=10 || s-i<0){
		return 0;
	}

	return test(n, s, i+1) + test(n-1, s-i, i+1);
}

int main(){
	
	int km[11][101]={0};
	
	for(int i=0;i<10;i++){
		km[1][i]=1;
	}
	/*
	for(int i=1;i<9;i++){
		for(int j=i-1;j<101;j++){
			for(int k=j;j+k<101;k++){
				if(i+1==3 && j+k==6) cout << i << " "<< j<<" "<<k<<" "<<km[i][j]<<endl;
				if(j!=k){
				km[i+1][j+k]+=km[i][j];
				}else{
					km[i+1][j+k]+=1;
				}
			}
		}
	}
	*/
	/*
	for(int i=2;i<=10;i++){
		/*
		for(int j=0;j<101;j++){
			if(km[i-1][j]){
				for(int k=j+1;k<=10&&j+k<101;k++){
					if(i==3 && j+k==6) cout << j<<" "<<k<<endl;
					
					km[i][j+k]+=km[i-1][j];
				}
			}
		}
		
		for(int j=0;j<10;j++){
			for(int k=0;k<101;k++){
				if(km[i-1][k]&&k>j){
					if(i==3 && k+j==1) cout << j<<" "<<k<<endl;;
					km[i][k+j]++;
				}
			}
		}
	}
	*/
	/*
	for(int i=2;i<=10;i++){//２個で作る組み合わせから計算
		for(int j=0;j<101;j++){//横に調べて行って
			if(km[i-1][j]){//もしあれば
				for(int k=i-1;k<10;k++){
					if(i==2 && k+j==3) cout << j<<" "<<k<<endl;
					km[i][j+k]++;
				}
			}
		}
	}

	for(int i=0;i<10;i++){
		for(int j=0;j<30;j++){
			cout << km[i][j]<<" ";
		}
		cout << endl;
	}
	cout << km[3][6];
	*/
	/*
	int n, s;
	while(cin >> n >> s){
		if(n==0 && s==0) break;
		cout << km[n][s] << endl;
	}
	*/

	int n,s;
	while(cin >> n >> s){
		if(n==0 && s==0) break;
		cout<<test(n,s,0)<<endl;
	}
	return 0;
}