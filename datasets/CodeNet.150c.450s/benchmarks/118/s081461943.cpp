#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	int y,m,d;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>y>>m>>d;
		long long count;
		count=(y-1)*195;
		count+=(y-1)/3*5;
		count+=(m-1)*20;
		if(y%3!=0)
			count-=(m-1)/2;
		count+=d;
		cout<<196471-count<<endl;
	}
    return 0;
}