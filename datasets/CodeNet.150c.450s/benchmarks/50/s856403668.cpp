#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
	
	while(1)
	{
		int n;
		cin>>n;
		
		if(n==0)break;
		
		int t = 1000 - n;
		
		int a[] = {500, 100, 50, 10, 5, 1};
		int cnt = 0;
		for(int i=0;i<6;i++){
			while(1){
				if(t < a[i])break;
				t -= a[i];
				cnt++;
			}
		}
		
		cout<<cnt<<endl;
	}
	
	
}