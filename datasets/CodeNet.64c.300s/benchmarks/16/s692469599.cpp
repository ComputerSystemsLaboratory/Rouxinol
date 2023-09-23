#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
#define PI 3.14159265
	
int main(void){
	int max=-1000000000;
	int n;
	int min,data;
	cin>>n;
	cin>>min;
	for(int i=0;i<n-1;i++){
		cin>>data;
		if(data-min>max)
			max = data-min;
		if(min>data)
			min = data;
	}
	cout<<max<<endl;
	return 0;
}