#include<iostream>
using namespace std;

int main(){
	int x[201];
	int y[201];
	int N,n,d;
	int size_x,size_y;
	int left,right,up,down;
	int i;
	while(1){
		
		left=0,right=0,up=0,down=0;
		
		cin >> N;
		
		if(N==0){
			break;
		}
		
		for(i = 0 ; i < 201 ; i++){
			x[i]=0; 
			y[i]=0;
		}
		
		for(i = 1 ; i < N ; i++){
			cin >> n >> d;
			
			if(d==0){
				x[i]=x[n]-1;
				y[i]=y[n];
			}
			else if(d==1){
				x[i]=x[n];
				y[i]=y[n]-1;
			}
			else if(d==2){
				x[i]=x[n]+1;
				y[i]=y[n];
			}else{
				x[i]=x[n];
				y[i]=y[n]+1;
			}
		}
		
		for(i=1 ; i < 201 ; i++){
			if(left > x[i]){
				left = x[i];
			}
			if(right < x[i]){
				right = x[i];
			}
			if(down > y[i]){
				down = y[i];
			}
			if(up < y[i]){
				up = y[i];
			}
		}
			
			if(left < 0){
				left = -left;
			}
			if(down < 0){
				down = -down;
			}
		
		size_x = left + right + 1;
		size_y = down + up + 1;
		
		cout << size_x << " " << size_y << endl;
	}
			return 0;
}  