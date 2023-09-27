#include <iostream>

using namespace std;

int main(){
	int w, h;
	while(1){
		cin >> h >> w;
		if(!h && !w)break;
		int size = (h*h)+(w*w), min =(150*150)*(150*150);
		int ans1=h, ans2=w;
		for(int i=1; i<150; i++){
			for(int j=i+1; j<150; j++){
				int tmp = (i*i)+(j*j);
				if(size <= tmp && tmp<=min){
					if(size == tmp && h>i)continue;
					if(min == tmp && ans1<i)continue;
					if(i==h && j==w)continue;
					min = tmp;
					ans1 = i;
					ans2 = j;
				}
			}
		}
		cout << ans1 << " " << ans2 << endl;
	}
	return 0;
}

