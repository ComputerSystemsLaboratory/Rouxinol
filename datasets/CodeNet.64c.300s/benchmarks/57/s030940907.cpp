#include<iostream>

int r,c;//r縦c横
bool senbei[10][10000];//0の数を増やす
bool yotei[10];
int ans=0;

int keisan(){
	int res=0;
	for(int j=0;j<c;j++){
		int t=0;
		for(int i=0;i<r;i++){
			if((!yotei[i]&&senbei[i][j])||(yotei[i]&&!senbei[i][j])){
				t++;//裏返してないならせんべいの０を　裏返してるならせんべいの１を数える
			}
		}
		if(t>r-t)res+=t;
		else res+=(r-t);
	}
	return res;
}


void func(int _r){
	if(_r==r){
		ans=std::max(ans,keisan());
		return ;
	}
	yotei[_r]=false;//裏返す
	func(_r+1);
	yotei[_r]=true;//裏返さない
	func(_r+1);
}

int main(){
	while(std::cin>>r>>c,r*c){
		for(int i=0;i<r;i++)for(int j=0;j<c;j++)std::cin>>senbei[i][j];
		func(0);
		std::cout<<ans<<std::endl;
	}
	return 0;
}