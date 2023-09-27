#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define infinity (1<<30)
const int maxx=2000100;
int A[maxx];
int n;

void max_heap(int i){
	int left=2*i,right=2*i+1,x;
	if(left<=n && A[left]>A[i]) x=left;
	else x=i;
	if(right<=n && A[right]>A[x] ) x=right;
	if(x!=i){
		swap(A[x],A[i]);
		max_heap(x);
	}
	return ;
}

int extract(){
	int x;
	x=A[1];
	A[1]=A[n];
	n--;
	max_heap(1);
	return x;
}

int main (){
	string s;
	int a;
	n=0;
	while(cin>>s){
		if(s[0]=='i'){
			cin>>A[++n];
			int i=n;
			while(i>1 && A[i]>A[i/2]){
				swap(A[i],A[i/2]);
				i=i/2;
			}
		}
		else if(s[1]=='x'){
			cout<<extract()<<endl;
		}
		else return 0;
	}
	return 0;
}
