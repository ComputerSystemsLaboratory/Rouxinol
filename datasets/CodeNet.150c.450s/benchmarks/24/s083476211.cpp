#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int n,m;
class data{
public:
	int x,p;
	data(int ix,int ip){
		x=ix;
		p=ip;
	}
	bool operator<(const data& d1)const{
		return d1.p<p;
	}
};


vector<data> dat;
int main(void){
	while(1){
		scanf("%d %d",&n,&m);
		if(n+m==0)break;
		dat.clear();
		for(int i=0;i<n;i++){
			int x,p;
			scanf("%d%d",&x,&p);
			dat.push_back(data(x,p));
		}
		sort(dat.begin(),dat.end());
		int res=0;
		for(int i=0;i<n;i++){
			if(m>0){
				if(m<dat[i].x){
					res+=(dat[i].x-m)*dat[i].p;
					m=0;
				}
				if(m>=dat[i].x){
					m-=dat[i].x;
				}
			}else res+=dat[i].x*dat[i].p;
		}
		printf("%d\n",res);
	}
	return 0;
}