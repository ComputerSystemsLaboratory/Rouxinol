#include<iostream>
using namespace std;
int main(){
	int retsu,gyou,count,count2,masu[101][101]={0};
	cin>>retsu>>gyou;
	for(count=0;count<retsu;count++){
		for(count2=0;count2<gyou;count2++){
			cin>>masu[count][count2];
			masu[retsu][count2]+=masu[count][count2];
			masu[count][gyou]+=masu[count][count2];
		}
	}
	for(count=0;count<retsu;count++){
		masu[retsu][gyou]+=masu[count][gyou];
	}
	for(count=0;count<=retsu;count++){
		for(count2=0;count2<=gyou;count2++){
			if(count2!=gyou){cout<<masu[count][count2]<<' ';}
			else{cout<<masu[count][count2];}
		}
		cout<<endl;
	}
	return 0;
}