#include <iostream>
using namespace std;

int ary[20][10010];
int main(){
	int R,C,res,tmp,cnt;
	while(true){
		cin>>R>>C;
		if(R==0&&C==0) break;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>ary[i][j];
			}
		}

		res=0;
		for(int i=0;i<(1<<R);i++){
			cnt=0;
			for(int j=0;j<C;j++){
				tmp=0;
				for(int k=0;k<R;k++){
					tmp+=(ary[k][j]^((i>>k)&1));
				}
				cnt+=max(tmp,R-tmp);
			}
			res=max(res,cnt);
		}
		cout<<res<<endl;
	}
	return 0;
}