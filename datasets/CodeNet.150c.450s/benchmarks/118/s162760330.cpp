#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int days[1000][11][21];

int main(){
	int n,y,m,d;
	int year=999,month=10,day=20,cnt=1;
	while(year>=1 && month>=1 && day>=1){
		days[year][month][day]=cnt;
		cnt++;
		day--;
		if(day<=0){
			if(month==1){
				year--;
				month=10;
				if(year%3==0)day=20;
				else day=19;
			}else{
				month--;
				if(year%3==0){
					day=20;
				}else{
					if(month%2==1){
						day=20;
					}else{
						day=19;
					}
				}
			}
		}
	}
	cin>>n;
	rep(k,n){
		cin>>y>>m>>d;
		cout<<days[y][m][d]<<endl;
	}
	return 0;
}