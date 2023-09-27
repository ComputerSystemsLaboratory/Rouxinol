#include <iostream>
using namespace std;
int h,count,sum;
bool flag;
int puz[11][5];
int main(){
	while(1){
		cin >>h;
		if(h==0)break;
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cin >>puz[i][j];
			}
		}

		sum=0;
		while(1){
			flag=false;
			count=0;

			for(int i=0;i<h;i++){
				if(puz[i][0]==puz[i][1]&&puz[i][1]==puz[i][2]&&puz[i][0]!=0){
					sum+=puz[i][0]*3;
					if(puz[i][0]==puz[i][3]){
						sum+=puz[i][0];
						if(puz[i][0]==puz[i][4]){
							sum+=puz[i][0];
							puz[i][4]=0;
						}
						puz[i][3]=0;
					}
					puz[i][0]=puz[i][1]=puz[i][2]=0;
					flag=true;
					count++;
				}else if(puz[i][1]==puz[i][2]&&puz[i][2]==puz[i][3]&&puz[i][1]!=0){
					sum+=puz[i][1]*3;
					if(puz[i][1]==puz[i][4]){
						sum+=puz[i][1];
						puz[i][4]=0;
					}
					puz[i][1]=puz[i][2]=puz[i][3]=0;
					flag=true;
					count++;
				}else if(puz[i][2]==puz[i][3]&&puz[i][3]==puz[i][4]&&puz[i][2]!=0){
					sum+=puz[i][2]*3;
					puz[i][2]=puz[i][3]=puz[i][4]=0;
					flag=true;
					count++;
				}
			}

			if(!flag)break;
			for(int k=0;k<count;k++){
				for(int i=h-2;i>=0;i--){
					for(int j=0;j<5;j++){
						if(puz[i+1][j]==0){
							puz[i+1][j]=puz[i][j];
							puz[i][j]=0;
						}
					}
				}
			}

		}
		cout<<sum<<endl;
	}
}