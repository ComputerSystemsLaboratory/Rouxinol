#include <iostream>
using namespace std;
int main(){
	int data[4][3][10];
	for(int x=0;x<4;x++){
		for(int y=0;y<3;y++){
			for(int z=0;z<10;z++){
				data[x][y][z] = 0;
			}
		}
	}
	//initialization
	int n,b,f,r,v;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> b>> f >>r >>v;
		data[b-1][f-1][r-1] +=v;
	}
	//input end
	//out put phase
	for(int x=0;x<4;x++){
		for(int y=0;y<3;y++){
			for(int z=0;z<10;z++){
				cout<<" "<<data[x][y][z];
			}
			cout<<endl;
		}
		if(x<3){
			for(int k=0;k<20;k++){
				cout<<"#";
			}
			cout<<endl;
		}
		
	}

	return 0;
}