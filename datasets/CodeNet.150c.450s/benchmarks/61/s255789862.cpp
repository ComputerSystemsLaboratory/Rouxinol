#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int N,A,B,C,X;
	int cnt,maxFlame,nextFlameNum;
	int Y[10001];
	int R[10001];
	
	while(cin>>N>>A>>B>>C>>X,N||A||B||C||X){
		 
		 cnt=0;
		 maxFlame=0;
		 nextFlameNum=0;
		 
		 fill(Y,Y+10001,0);
		 fill(R,R+10001,0);
		 
		 for(int i=0;i<N;i++){
		 	cin>>Y[i];
		 }
		 
		 //乱数
		 R[0]=X;
		 for(int i=1;i<10001;i++){
		 	R[i]=(A*R[i-1]+B)%C;
		 }
		 
		 
		 for(int i=0;i<N;i++){
			 for(int j=nextFlameNum;j<=10001;j++){
		 		if(Y[i]==R[j]){
						maxFlame=j;
						nextFlameNum=j+1;
		 				cnt++;
						break;
		 		}
		 	}
		 }
		 if(cnt!=N){
		 	cout<<-1<<endl;
		 }
		 else{
		 	cout<<maxFlame<<endl;
		 }
	}
}