#include <vector>
#include <iostream>

int main(){
	int i;
	double x[4],y[4],xp,yp;
	double ax,px,ay,py;
	bool left,right;
	
	while(std::cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp){
		x[3]=x[0];
		y[3]=y[0];
		
		left = false;
		right = false;
		
		for(i=0;i<3;i++){
			ax = x[i+1]-x[i];
			ay = y[i+1]-y[i];
			px = xp - x[i];
			py = yp - y[i];
			if(ax*py-px*ay < 0){
				right = true;
			}else{
				left = true;
			}
		}
		
		if(left^right){
			std::cout << "YES" << std::endl;
		}else{
			std::cout << "NO" << std::endl;
		}
	}
}