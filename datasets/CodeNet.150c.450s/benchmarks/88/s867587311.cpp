#include<iostream>
using namespace std;

int main()
{
	int h,w;

	cin>>h>>w;	// w>h
	while(w!=0 || h!=0){
		int aw=0,ah=0;
		int t =w*w +h*h;
		//同じ対角線の長さを調べる。
		for(int i=1;i<150;i++){
			for(int j=1;j<i;j++){
				if(t==(i*i+j*j) && j>h){
					aw=i;
					ah=j;
				}
			}
		}
		//異なる対角線の長さを調べる
		int plus=1;
		while(ah==0 && aw==0){
			for(int i=1;i<150;i++){
				for(int j=1;j<i;j++){
					if((t+plus)==(i*i+j*j)){
						aw=i;
						ah=j;
					}
				}
			}
			plus++;
		}
		cout<<ah<<" "<<aw<<endl;
		cin>>h>>w;
	}
}