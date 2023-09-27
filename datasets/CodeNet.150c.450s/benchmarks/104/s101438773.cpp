#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int w,n;
	char con;
	cin>>w>>n;
	vector<int> s(w);
	vector<int> a(n);
	vector<int> b(n);
	
	for(int i=0;i<w;i++)
		s[i]=i+1;
	
	for(int i=0;i<n;i++)
		cin>>a[i]>>con>>b[i];
	
	for(int i=0;i<n;i++)
		swap(s[a[i]-1],s[b[i]-1]);
	
	for(int i=0;i<w;i++)
		cout<<s[i]<<endl;
}