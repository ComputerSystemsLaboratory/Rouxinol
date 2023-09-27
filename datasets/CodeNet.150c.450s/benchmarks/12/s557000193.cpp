#include <iostream>
using namespace std;
int parent(int x){return x/2;}
int leftchild(int x){return 2*x;}
int rightchild(int x){return 2*x + 1;}
int main()
{
	int h,a[300];
	cin>>h;
	for(int i=1;i<=h;++i)cin>>a[i];
	for(int i=1;i<=h;++i){
		cout<<"node "<<i<<": key = "<<a[i]<<", ";
		if(parent(i) >= 1)cout<<"parent key = "<<a[parent(i)]<<", ";
		if(leftchild(i) <= h)cout<<"left key = "<<a[leftchild(i)]<<", ";
		if(rightchild(i) <= h)cout<<"right key = "<<a[rightchild(i)]<<", ";
		cout<<endl;
	}
	return 0;
}