#include<iostream>
#include<math.h>
using namespace std;

int r,c;
bool state[10][10000];
bool linemap[10][10000];
int mapcount;
int getnum(bool status[10][10000]){
	int num=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(status[i][j])num++;
		}
	}
	return num;
}

void adjust(){
	
		for(int j=0;j<c;j++){
			int num0=0,num1=0;
			for(int k=0;k<r;k++){
				if(linemap[k][j])num1++;
				else num0++;
			}
			if(num0>num1){
				for(int k=0;k<r;k++){
					linemap[k][j]=1-linemap[k][j];
				}
			}
		}
	
}
int creatlinemap(){
	int max=0;
	for(int i=0;i<mapcount;i++){
		for(int j=0;j<r;j++){
			if(i&(1<<j)){
				for(int k=0;k<c;k++){
					linemap[j][k]=state[j][k];
				}
				
			}
			else{
				for(int k=0;k<c;k++){
					linemap[j][k]=1-state[j][k];
				}
			}
		}
		adjust();
		int tmp=getnum(linemap);
		if(tmp>max)	max=tmp;			
	}
	return max;	
}


int main(){

	while(cin>>r>>c){
		if(r*c==0)return 0;
		mapcount=(int)pow(2.0,r);
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>state[i][j];
			}
		}
		
		cout<<creatlinemap()<<endl;
	}
}