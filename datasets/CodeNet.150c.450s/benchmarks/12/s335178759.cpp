#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<queue> 
#include<stack>
#include<cstdio>

using namespace std;

int a[251];
int parent(int i){
	return i/2;
}
int left(int i){
	return i*2;
}
int right(int i){
	return i*2 +1;
}

int main(){
	
	int h;
	cin>>h;
	
	for(int i=1; i<=h; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i=1; i<=h; i++){
		printf("node %d: key = %d, ",i,a[i]);
		
		if(parent(i) > 0){
			printf("parent key = %d, ",a[parent(i)]);
		}
		if(left(i) <= h){
			printf("left key = %d, ",a[left(i)]);
		}
		if(right(i) <= h){
			printf("right key = %d, ",a[right(i)]);
		}
		
		cout<<endl;
	}
	
	return 0;
}