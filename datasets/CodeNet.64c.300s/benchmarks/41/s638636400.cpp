#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;

long long int s[500001]={0}; 
void my_binary_heap(int i,int H){
	int l=2*i;
	int r=2*i+1;
	int max;
	if(l<=H&&s[l]>s[i])
		max=l;
	else
		max=i;
	if(r<=H&&s[r]>s[max])
		max=r;
	if(max!=i){
		swap(s[i],s[max]);
	my_binary_heap(max,H);
	}
	
}
int main(){
	
	int H;
	cin>>H;
	
	
	for(int i=1;i<=H;i++){
		cin>>s[i];
	}
	
	for(int i=H/2;i>=1;i--){
		my_binary_heap(i,H);
	}
	
	for(int i=1;i<=H;i++)
		cout<<" "<<s[i];
	cout<<endl;
}