#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int *num,siz,time,max,nownum;
	while(cin>>time>>siz&&time!=0){
		num=new int[siz];
		for(int i=0;i<siz;++i){
			num[i]=0;
		}
		nownum=0;
		int dommy;
		max=-2000000000;
		for(int i=0;i<time;++i){
			cin>>dommy;
			nownum-=num[i%siz];
			nownum+=dommy;
			num[i%siz]=dommy;
			if(max<nownum&&i+1>=siz){
				max=nownum;
			}
		}
		cout<<max<<endl;
		delete num;
	}
	return 0;
}