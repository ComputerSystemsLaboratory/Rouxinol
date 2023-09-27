#include<iostream>

using namespace std;

int main(){

	int N,A,B,C,X;

	while(cin>>N>>A>>B>>C>>X,N){
		int *Y=new int [N];

		for(int i=0;i<N;i++)	cin>>Y[i];
		int kekka=0;
		int cnt=0;
		for(int j=0;j<10001;j++){
			if(Y[cnt]==X){
					cnt++;
				}
			X=(X*A+B)%C;
			if(cnt==N){
				cout<<kekka<<endl;
				delete []Y;
				break;
			}
			kekka++;
			if(kekka>10000){
				cout<<-1<<endl;
				delete []Y;
				break;
			}
		}

	}
}