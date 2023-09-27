#include<iostream>

using namespace std;


int xx(int a,int b){
	return a*a+b*b;
}

int main(){
	while(1){
		int w,h;
		cin>>h>>w;
		int Nw=0,Nh=0;

		int mini=100000;
		if(w==0 && h==0)break;


		for(int j=1;j<=10000;j++){
			for(int i=1;(i<j && i*j<=20000);i++){
				if(xx(i,j)>xx(w,h) || (xx(i,j)==xx(w,h) && i>h)){
					if(xx(i,j)<mini || (xx(i,j)==mini && Nh>i)){
						mini=xx(i,j);
						Nw=j,Nh=i;
					}
				}
			}
		}
		cout<<Nh<<" "<<Nw<<endl;
	}
	return 0;
}