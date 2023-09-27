#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int R,C,gki,ggki,rin;
	unsigned tmp,ary[10010];
	while(1){
		cin>>R>>C;
		if(R==0&&C==0){
			break;
		}
		for(int i=0;i<C;i++){
			ary[i]=0;
		}
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>tmp;
				ary[j]+=(tmp<<(R-i-1));
			}
		}
		ggki=0;
		for(unsigned u=0;u<(unsigned)(1<<(R-1));u++){
			gki=0;
			//cout<<"u="<<u<<" ";//
			for(int i=0;i<C;i++){
				tmp=ary[i]^u;
				//cout<<"ary["<<i<<"]="<<ary[i]<<" ";//
				//cout<<"tmp("<<i<<")="<<tmp<<" ";//
				rin=0;
				for(int j=0;j<R;j++){
					if((tmp>>j)&1) rin++;
				}
				
				rin=max(rin,R-rin);
				//cout<<"rin("<<i<<")="<<rin<<" ";//
				gki+=rin;
			}
			//cout<<gki<<endl;//
			ggki=max(ggki,gki);
		}
		cout<<ggki<<endl;
	}
	return 0;
}