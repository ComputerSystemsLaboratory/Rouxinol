#include <iostream>
using namespace std;

int main(){
	while(true){
		bool map[21][21]={};
		int gem,n,get=0,cx=10,cy=10;
		cin>>gem;
		if(gem==0)break;
		for(int i=0;i<gem;i++){
			int x,y;
			cin>>x>>y;
			map[x][y]=true;
		}
		cin>>n;
		for(int i=0;i<n;i++){
			char oder;
			int leng;
			cin>>oder>>leng;
			for(int j=0;j<leng;j++){
			switch (oder){
			case 'N':
				cy++;
				break;
			case 'S':
				cy--;
				break;
			case 'W':
				cx--;
				break;
			case 'E':
				cx++;
				break;
			}
			if(map[cx][cy]){
				map[cx][cy]=false;
				get++;
			}
			}
		}
		cout<<(get==gem?"Yes":"No")<<endl;
	}
	return 0;
}