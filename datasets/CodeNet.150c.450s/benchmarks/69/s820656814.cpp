#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n;
	int left, right;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> left;
		right=0;
		int temp;
		bool flag = 1;
		//while(cin >> temp){
		for(int j=1;j<10;j++){
			cin >> temp;
			if(left<right){
				if(right<temp){
					right=temp;
				}else if(left<temp){
					left=temp;
				}else{
					flag=false;
				}
			}else{
				if(left<temp){
					left=temp;
				}else if(right<temp){
					right=temp;
				}else{
					flag=false;
				}
			}
		}
		if(flag){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}