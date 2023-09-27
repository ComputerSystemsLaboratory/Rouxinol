#include <iostream>
using namespace std;

int main(){
	int h,w,z,x,y,res,a;
	while(1){
		res = 100000;
		bool f = true;
		cin >> h >> w;
		if(h == 0)break;
		z = h*h + w*w;
		for(int i = 1;i < 151;i++){
			for (int j = i+1; j < 151;j++){
				a = (i*i) + (j*j);
				if(a == z && i > h){
					res = min(res,a);
					x = j;
					y = i;
					f = false;
					break;
				}
			}
		if(f == false)break;
		}
		if(f == false){
			cout << y << " " << x << endl;
			continue;
		}
		for(int i = 1;i < 151;i++){
			for(int j = i+1;j < 151;j++){
				a = (i*i)+(j*j);
				if(z < a){
					if(res == a)continue;
					res = min(res,a);
					if(res == a){
						x = j;
						y = i;
					}
				}
			}
		}
		cout << y << " " << x << endl;
	}
	return 0;
}