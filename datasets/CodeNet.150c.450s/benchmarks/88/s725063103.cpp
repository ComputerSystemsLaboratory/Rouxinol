// Problem A

#include <iostream>
#include <utility>

using namespace std;

bool les(int x1,int y1,int x2,int y2){
	int t1 = x1*x1 + y1*y1;
	int t2 = x2*x2 + y2*y2;

	if( t1 < t2 ){
		return true;
	}else if( t1 == t2 && y1 < y2 ){
		return true;
	}
	return false;
}

int main(){
	
	int h,w,x1;

	while(1){
		cin >> h;
		cin >> w;
		if( h == 0 && w == 0)
			break;
		x1 = h*h + w*w;
		int cur_h,cur_w,w2,h2;
		cur_h = 1500;
		cur_w = 1500;
		for(w2 = 1; w2 < 150; w2++){
			for(h2 = 1; h2 < 150; h2++){
				if(h2 >= w2)
					break;
				if(!les(w,h,w2,h2))
					continue;
				if(les(w2,h2,cur_w,cur_h)){
					cur_w = w2;
					cur_h = h2;
				}
			}
		}
		if(cur_h > cur_w)
			swap(cur_h,cur_w);

		cout << cur_h << " " << cur_w << endl;
	}
return 0;
}