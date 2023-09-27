/*
 * hoge.cpp
 *
 *  Created on: 2014/09/30
 *      Author: eiichi
 */
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
using namespace std;

void draw(int H,int W){
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			if(i%2==0 && j%2==0 || i%2==1 && j%2==1)
				cout << "#";
			else
				cout << ".";
		}
		cout << endl;
	}
	cout << endl;
	return;
}

int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int x = i;
		if(x%3==0){
			cout << " " << i;
			continue;
		}
		do{
			if(x%10==3){
				cout << " " << i;
				break;
			}
			x/=10;
		}while(x);
	}
	cout << endl;

	return 0;
}