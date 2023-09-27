#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct R{
	int w, h;
	R(){}
	R(int w_, int h_){
		w = w_; h = h_;
	}
};
bool operator<(const R &a, const R &b){
	if( a.w * a.w + a.h * a.h == b.w * b.w + b.h * b.h ){
		return a.h < b.h;
	}
	return a.w * a.w + a.h * a.h < b.w * b.w + b.h * b.h;
}

int main(){
	int w, h;
	while( cin >> h >> w , h || w ){
		R r(w, h);
		vector<R> v;
		for(int h_ = 1; h_ <= 150; h_++){
			for(int w_ = 1; w_ <= 150; w_++){
				if( w == w_ && h == h_ ) continue;
				if( w_ > h_ ){
					v.push_back( R(w_, h_) );
				}
			}
		}
		sort(v.begin(), v.end());
		int aw, ah;
		for(int i = 0; i < v.size(); i++){
			if( r < v[i] ){
				aw = v[i].w;
				ah = v[i].h;
				break;
			}
		}
		cout << ah << " " << aw << endl;
	}
}