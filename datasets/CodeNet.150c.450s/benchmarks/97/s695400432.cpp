#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	while(1){
		int n,field[402][402]={},x,y,ue,sita,migi,hidari;
		field[200][200]=1;
		cin >> n;
		if(!n)	break;
		for(int f=1;f<n;f++){
			cin >> x >> y;
			for(int i=0;i<=400;i++){
				for(int j=0;j<=400;j++){
					if(field[i][j]==(x+1)){
						if(y==0)	field[i][j-1]=f+1;
						else if(y==1)	field[i-1][j]=f+1;
						else if(y==2)	field[i][j+1]=f+1;
						else	field[i+1][j]=f+1;
					}
				}
			}
		}
		for(int i=0;i<=400;i++){
			for(int j=0;j<=400;j++){
				if(field[i][j]){
						ue=i;
						break;
				}
			}
		}
		for(int i=0;i<=400;i++){
			for(int j=0;j<=400;j++){
				if(field[j][i]){
						hidari=i;
						break;
				}
			}
		}
		for(int i=400;i>=0;i--){
			for(int j=400;j>=0;j--){
				if(field[j][i]){
						migi=i;
						break;
				}
			}
		}
		for(int i=400;i>=0;i--){
			for(int j=400;j>=0;j--){
				if(field[i][j]){
						sita=i;
						break;
				}
			}
		}
		cout << abs(migi-hidari)+1 << ' ' << abs(ue-sita)+1 << endl;
	}
}
