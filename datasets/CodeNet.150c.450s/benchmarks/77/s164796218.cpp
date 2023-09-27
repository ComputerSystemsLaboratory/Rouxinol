#include <iostream>
using namespace std;
int n,m,i,x,y,z;
bool data[21][21];
char h[1];
int main(){
	while(cin>>n){
		if(n==0){break;}
		for(x=0;x<=20;x++){
			for(y=0;y<=20;y++){
				data[x][y]=0;
			}
		}
		for(i=0;i<n;i++){
			cin>>x>>y;
			data[x][y]=1;
		}
		cin>>n;
		x=10,y=10;
		data[x][y]=0;
		for(i=0;i<n;i++){
			cin>>h>>m;
			switch(h[0]){
			case 'N':
				for(z=0;z<m;z++){
					y+=1;
					data[x][y]=0;
				}
				break;
			case 'S':
				for(z=0;z<m;z++){
					y-=1;
					data[x][y]=0;
				}
				break;
			case 'E':
				for(z=0;z<m;z++){
					x+=1;
					data[x][y]=0;
				}
				break;
			case 'W':
				for(z=0;z<m;z++){
					x-=1;
					data[x][y]=0;
				}
				break;
			}
		}
		m=0;
		for(x=0;x<=20;x++){
			for(y=0;y<=20;y++){
				m+=data[x][y];
			}
		}
		if(m==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}