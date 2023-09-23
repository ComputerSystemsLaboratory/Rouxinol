#include<string>
#include<iostream>
#include<cctype>
#include<cmath>
#include<cstdio>

using namespace std;

int main(void){
	int a;
	cin >> a;
	int b[10000];
	long long min=pow(10,6);
	long long  max=-pow(10,6);
	int i;

	for(i=0;i<a;i++){
		cin >> b[i];	
		}
	for(i=0;i<a;i++){
		if(min>b[i]) min=b[i];
		if(max<b[i]) max=b[i];
		}

	long long sum=0;
	for(i=0;i<a;i++){
		sum+=b[i];
		}

	cout << min << " "<< max << " "<< sum <<endl;
	return 0;
}