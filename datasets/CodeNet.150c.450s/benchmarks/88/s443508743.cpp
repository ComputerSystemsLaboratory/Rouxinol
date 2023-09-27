#include<iostream>
using namespace std;

int main(){
	int h, w;

	cin >> h >> w;
	while(h != 0 || w != 0){
		int ans[2],min=100000;;
		ans[0]=1000;
		ans[1]=1000;
		int current=h*h+w*w;
		int anstmp=current;
	
		for(int i=1; i<10000; i++){
			for(int j=i+1; j<10000-i; j++){
				int tmp=i*i+j*j;
				if(tmp > current || (tmp == current && i>h) ){
					if(tmp < min || (tmp == min && ans[0] > i) ){
						min = tmp;
						ans[0]=i;
						ans[1]=j;
					}
				}
			}
		}
		cout << ans[0] << ' ' << ans[1] << endl;
		cin >> h >> w;
	}
}