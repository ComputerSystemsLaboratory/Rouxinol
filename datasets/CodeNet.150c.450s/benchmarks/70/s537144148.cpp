#include <iostream>
#include <cstdio>
using namespace std;

int ary[15];
char str[7][12]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int main(){
	ary[1]=2;
	for(int i=1;i<12;i++){
		if(i==4||i==6||i==9||i==11){
			ary[i+1]=(ary[i]+30)%7;
		}
		else if(i==2){
			ary[i+1]=(ary[i]+29)%7;
		}
		else{
			ary[i+1]=(ary[i]+31)%7;
		}
	}
	int x,y;
	while(scanf("%d %d",&x,&y)!=EOF){
		if(x==0&&y==0) break;
		cout<<str[(ary[x]+y)%7]<<endl;
	}
	return 0;
}