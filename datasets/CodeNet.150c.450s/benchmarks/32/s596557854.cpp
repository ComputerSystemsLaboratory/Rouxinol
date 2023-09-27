#define _USE_MATH_DEFINES
#include<stdio.h>
#include<string>
#include<iostream>
#include<cctype>
#include<cstdio>
#include<vector>
#include<stack>
#include <algorithm>
#include<math.h>
#include<set>
#include<map>
#include<iomanip>
using namespace std;



int main(){
	
int n,a,b;
while(1){
	cin>>n>>a>>b;
	if(!n&&!a&&!b)return 0;
	vector<int>k(n+1);
	for(int i=0;i<n;i++)cin>>k[i];
	sort(k.begin(),k.end());
	reverse(k.begin(),k.end());
	int m=k[a-1]-k[a],y=a;
	for(int i=a-1;i<b;i++){
		if(k[i]-k[i+1]>=m){
			m=k[i]-k[i+1];y=i+1;
		//	cout<<m<<" ";
		}
	}
	cout<<y<<endl;
	

}

	return 0;
}