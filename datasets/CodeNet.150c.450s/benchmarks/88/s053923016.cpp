#include <iostream>

using namespace std;

class Rect{
	public:
		int w;
		int h;
		int diagonal;
};

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	
	Rect rect[11180];
	for(int i=0;i<11180;i++){
		rect[i].diagonal=1000000;
	}

	int cnt=0;
	for(int i=1;i<=150;i++){
		for(int j=1;j<i;j++){
			rect[cnt].w=i;
			rect[cnt].h=j;
			rect[cnt].diagonal =i*i+j*j;
			cnt++;
		}
	}

	for(int i=0;i<11180;i++){
		for(int j=11180-1;j>i;j--){
			if(rect[j].diagonal<=rect[j-1].diagonal){
				swap(&rect[j].h,&rect[j-1].h);
				swap(&rect[j].w,&rect[j-1].w);
				swap(&rect[j].diagonal,&rect[j-1].diagonal);
			}
		}
	}

	for(int i=0;i<11180;i++){
		for(int j=11180-1;j>i;j--){
			if(rect[j].diagonal==rect[j-1].diagonal && rect[j].h<=rect[j-1].h){
				swap(&rect[j].h,&rect[j-1].h);
				swap(&rect[j].w,&rect[j-1].w);
				swap(&rect[j].diagonal,&rect[j-1].diagonal);
			}
		}
	}
	/*
	for(int i=0;i<=10100;i++){
		cout<<"i="<<i<<endl;
		cout<<"h="<<rect[i].h<<"w="<<rect[i].w<<"diagonal="<<rect[i].diagonal<<endl;
	}
	*/	
	

	int inH,inW;
	while(cin>>inH>>inW){
		if(inH==0 && inW ==0)break;

		for(int i=0;i<11180;i++){
			if(rect[i].h == inH && rect[i].w == inW){
				/*
				cout<<"rectH="<<rect[i].h<<"rectW="<<rect[i].w<<endl;
				cout<<"inH ="<<inH<<"inW="<<inW<<endl;
				cout<<i<<" "<<i+1<<endl;
				*/
				cout<<rect[i+1].h<<" "<<rect[i+1].w<<endl;
				break;
			}
		}
	}

	return 0;
}