#include<iostream>

using namespace std;



int main(){
	int d[4][2];
	while(cin>>d[0][0]>>d[1][0]>>d[2][0]>>d[3][0]>>d[0][1]>>d[1][1]>>d[2][1]>>d[3][1]){
		int h=0,b=0;
		
		for(int i=0;i<4;i++){
			if(d[i][0]==d[i][1])h++;
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				
				if(d[i][0]==d[j][1] && i!=j)b++;
			}
		}
		cout<<h<<" "<<b<<endl;
	}
}