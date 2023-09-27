#include <iostream>

#include <string>
#include <queue>

using namespace std;

int main(){
	int w,h;
	int data[60][60];
	int flag[60][60];
	int dx[8] ={-1,-1,-1,0,1,1,1,0};
	int dy[8] ={-1,0,1,1,1,0,-1,-1};

	while(1){
		cin>>w>>h;
		if(w==0 && h==0)break;

	for(int i=0;i<60;i++){
		for(int j=0;j<60;j++){
			data[i][j]=-1;
			flag[i][j]=0;
		}
	}

	char tmp;
	int startX;
	int startY;
	int cnt=0;

	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>tmp;
			if(tmp=='1')data[i][j] = 0;
		}
	}

	queue<int> qX,qY;
	
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(data[i][j]==0 && flag[i][j]==0){
				flag[i][j]=1;
				qX.push(j);
				qY.push(i);
				cnt++;
			}
			else continue;

			while(qX.size()!=0){
				int topX = qX.front();
				int topY = qY.front();
				qX.pop();
				qY.pop();

				for(int i=0;i<8;i++){
					int nowX = topX + dx[i];
					int nowY = topY + dy[i];

					if(data[nowY][nowX] ==0 && flag[nowY][nowX] == 0){
						qX.push(nowX);
						qY.push(nowY);
						flag[nowY][nowX]=1;
					}
				}
			}
		}
	}

	cout<<cnt<<endl;
	}

	return 0;
}