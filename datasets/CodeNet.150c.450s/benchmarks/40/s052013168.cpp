#include <iostream>
#include <cstdio>
#include <utility>
using namespace std;

int main()
{
	int i=0,num[6],onum=-1;
	char order[100],c;	
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5];
	while(scanf("%c",&c)!=EOF){   
        order[i]=c;
        i++;
		onum++;
    }
	for(i=0;i<=onum;i++){
		if(order[i]=='E'){
			swap(num[0],num[3]);
			swap(num[2],num[3]);
			swap(num[3],num[5]);
		}
		if(order[i]=='W'){
			swap(num[0],num[2]);
			swap(num[2],num[3]);
			swap(num[2],num[5]);
		}
		if(order[i]=='S'){
			swap(num[0],num[1]);
			swap(num[0],num[4]);
			swap(num[4],num[5]);
		}
		if(order[i]=='N'){
			swap(num[0],num[1]);
			swap(num[1],num[4]);
			swap(num[1],num[5]);
		}
	}
	cout<<num[0]<<endl;
    return 0;
}