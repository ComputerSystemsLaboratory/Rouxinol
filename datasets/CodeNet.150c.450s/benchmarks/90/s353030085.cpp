#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[101],n;
	fill(a,a+101,0);
	while(cin>>n)a[n]++;
	int most = *max_element(a,a+101);
	for(int i=1;i<=100;i++)
		if(a[i]==most)cout<<i<<endl;
	return 0;
}