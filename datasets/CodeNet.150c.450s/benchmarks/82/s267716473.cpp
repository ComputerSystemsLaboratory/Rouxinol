#include <iostream>
#include <cstdio>
#include <utility>
using namespace std;
int main()
{
	int i=0,j,num[6],q,n1,n2;
	char order[100],c;	
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5];
	cin>>q;
	for(i=0;i<q;i++){
		cin>>n1>>n2;
		j=0;
		while(1){
			if(num[1]==n2)break;
			swap(num[0],num[1]);
			swap(num[1],num[4]);
			swap(num[1],num[5]);
			if(j==4){
			swap(num[0],num[3]);
			swap(num[2],num[3]);
			swap(num[3],num[5]);	
			}
			j++;
		}
		while(1){
			if(num[0]==n1)break;
			swap(num[0],num[3]);
			swap(num[2],num[3]);
			swap(num[3],num[5]);
		}
		cout<<num[2]<<endl;

	}
    return 0;
}