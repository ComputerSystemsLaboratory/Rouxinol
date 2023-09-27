#include "bits/stdc++.h"
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int d=0;
	while(cin>>d){
		int sum=0;

		for (int i = 0; i < 600; i=i+d) {
		sum+=i*i*d;
	}
	cout<<sum<<endl;
	}
}