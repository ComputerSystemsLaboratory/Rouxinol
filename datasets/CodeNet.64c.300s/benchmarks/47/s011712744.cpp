#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(){
	int a,max=0;
	int num[100]={0};
	while(cin>>a) num[a]++;
	for(int i=0;i<100;i++) if(num[i]>max) max=num[i];
	for(int i=0;i<100;i++) if(num[i]==max) cout<<i<<endl;
}