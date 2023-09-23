#include <iostream>
using namespace std;

int kou[6]={500,100,50,10,5,1};
int main(){
	int N,res;
	while(true){
		cin>>N;
		if(N==0) break;
		N=1000-N;
		res=0;
		for(int i=0;i<6;i++){
			while(N>=kou[i]){
				res++;
				N-=kou[i];
			}
		}
		cout<<res<<endl;
	}
	return 0;
}