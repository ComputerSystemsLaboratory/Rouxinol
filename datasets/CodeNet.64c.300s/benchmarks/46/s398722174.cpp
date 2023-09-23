#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

bool pr[1000000];

void erato(bool pr[1000000]){
	for(int k = 0;k<1000000;k++){
		if(k==0||k==1){
			pr[k] = false;
		}
		else{
			int flag = 1;
			for(int m=2;m*m<=k;m++){
				if(k%m==0){
					flag=0;
					break;
				}
			}
			if(flag){
				pr[k] = true;
			}
			else{
				pr[k] = false;
			}
		}
	}
}

int main(){
	int a, d, n, i, now;
	erato(pr);
	while(1){
		cin >> a >> d >> n;
		if(!n)break;
		i=0;
		now = a;
		while(1){
			if(pr[now]) i++;
			if(i==n)break;
			else now += d;
		}
		cout << now << endl;
	}
	return 0;
}