#include <iostream>
#include <utility>
using namespace std;
const int MAX_W = 30;
int main()
{
    int w,n;
	int num[MAX_W+1]={};
	char c;
	cin>>w>>n;
	for(int i=0;i<w;i++){
		num[i]=i+1;
	}
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>c>>b;
		swap(num[a-1],num[b-1]);
	}
	for(int i=0;i<w;i++){
		cout<<num[i]<<endl;
	}
    return 0;
}