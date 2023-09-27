#include<iostream>
#include<stdio.h>
#include<cmath> 
#include<stack> 
#include<algorithm> 
#include <string.h>
using namespace std;
typedef long long  ll;
int main() {
	int a[100001]={0};
	for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                a[((i+j)*(i+j)+(i+k)*(i+k)+(j+k)*(j+k))/2]++;
            }
        }
    }
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cout<<a[i]<<endl;
	}
	return 0;
}