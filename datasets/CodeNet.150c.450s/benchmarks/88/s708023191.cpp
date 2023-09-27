#include<iostream>
#include<algorithm>

using namespace std;

typedef struct s{
	int h,w;
} S;

bool operator<(S a,S b){
	return a.h*a.h+a.w*a.w<b.h*b.h+b.w*b.w||(a.h*a.h+a.w*a.w==b.h*b.h+b.w*b.w&&a.h<b.h);
}

int main(){

	int h,w;
	S data[150*150];
	int datac=0;

	for(int i=1;i<150;i++){
		for(int j=i+1;j<150;j++){
			data[datac].h=i;
			data[datac].w=j;
			datac++;
		}
	}

	sort(data,data+datac);

	while(1){
		cin>>h>>w;
		if(h==0&&w==0) break;

		for(int i=0;i<datac;i++){
			if(data[i].h==h&&data[i].w==w){
				cout<<data[i+1].h<<" "<<data[i+1].w<<endl;
				break;
			}
		}
	}
}