#include<iostream>
using namespace std;

int main(){
	int yama[10];
	for(int i=0;i<10;i++){
		cin>>yama[i];
	}
	for(int i=0;i<9;i++){
      for(int j=9;j>i;j--){
		  if(yama[j]>yama[j-1]){
			  int t=yama[j];
			  yama[j]=yama[j-1];
			  yama[j-1]=t;
		  }
	  }
	}
	for(int i=0;i<3;i++){
		cout<<yama[i]<<endl;
	}
    return 0;
}