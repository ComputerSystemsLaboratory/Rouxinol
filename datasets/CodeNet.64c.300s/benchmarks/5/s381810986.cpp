#include<iostream>
#include<algorithm>
#include<stack>
#include<map>
#include<set> 
using namespace std;
int main(){
	int n,m;
	//cin>>n;
	int h[10];
	for(int i=0;i<=9;i++)
	cin>>h[i];
	sort(h,h+10);
	for(int i=9;i>=7;i--)
	cout<<h[i]<<endl;
	//system("pause");
	return 0;
}
