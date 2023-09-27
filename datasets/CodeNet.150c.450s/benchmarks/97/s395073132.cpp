#include<iostream>
#include<vector>
using namespace std;

class Node{
public :
	int x;
	int y;
	void print(){
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};
int dx[]={-1, 0, 1, 0};
int dy[]={ 0,-1, 0, 1};
enum DIR{LEFT,DOWN,RIGHT,UP};
int xMin,xMax,yMin,yMax;
Node numList[201];
void init(){
//	cout<<"init "<<endl;
	xMin=0;
	xMax=1;
	yMin=0;
	yMax=1;
	for(int i=0;i<201;i++){numList[i].x=0;numList[i].y=0;}
	numList[0].x=1;
	numList[0].y=1;
//	cout<<"init complete"<<endl;
}
int main(){
	while(true){
		int d;
		cin>>d;
		if(!d)break;
		init();
//		cout<<"DATASET:"<<d<<endl;
		for(int i=1;i<d;i++){
			int num,dir;
			cin>>num>>dir;
//			cout<<"i:"<<i<<endl;
			numList[i].x=numList[num].x+dx[dir];
			numList[i].y=numList[num].y+dy[dir];
			if(xMax<numList[i].x)xMax=numList[i].x;
			if(xMin>numList[i].x-1)xMin=numList[i].x-1;
			if(yMax<numList[i].y)yMax=numList[i].y;
			if(yMin>numList[i].y-1)yMin=numList[i].y-1;
//			numList[i].print();
		}
		cout<<(xMax-xMin)<<" "<<(yMax-yMin)<<endl;
	}
	return 0;
}