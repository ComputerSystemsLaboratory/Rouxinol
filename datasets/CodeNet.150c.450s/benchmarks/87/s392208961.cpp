#include<bits/stdc++.h>
using namespace std;

int main() {
	while(1){
		int h, w{10}, cnt{}; cin >> h;
		if(!h) break;
		vector<vector<int>> f(2*h,vector<int>(5));
		for(int i=h-1; i>=0; i--)for(int j=0; j<5; j++) cin >> f.at(i).at(j);
		for(int i=h; i<2*h; i++) {
			for(int j=0; j<5; j++){
				f.at(i).at(j) = w;
				w++;
			}
		}
		vector<vector<int>> a1(h,vector<int>(5));
		for(int i=0; i<h; i++)for(int j=0; j<5; j++) a1.at(i).at(j) = i;
		bool flg{1};
		while(flg){
			auto a = a1;
			flg=0;
			for(int i=h-1; i>=0; i--){
				int f0 = f.at(a.at(i).at(0)).at(0), f1 = f.at(a.at(i).at(1)).at(1), f2 = f.at(a.at(i).at(2)).at(2), f3 = f.at(a.at(i).at(3)).at(3), f4 = f.at(a.at(i).at(4)).at(4);
				if(f2!=f1&&f2==f3){
					if(f3==f4){
						flg=1;
						cnt += f2*3;
						for(int k=i; k<h; k++) for(int l=2; l<5; l++) {
							if(k==h-1)a1.at(k).at(l)++;
							else a1.at(k).at(l) = a1.at(k+1).at(l);
						}
					}
				}
				if(f2==f1&&f2!=f3){
					if(f1==f0){
						flg=1;
						cnt += f2*3;
						for(int k=i; k<h; k++) for(int l=0; l<3; l++) {
							if(k==h-1)a1.at(k).at(l)++;
							else a1.at(k).at(l) = a1.at(k+1).at(l);
						}
					}
				}
				if(f2==f1&&f2==f3){
					flg=1;
					int b{3}, left{1}, right{3};
					if(f0==f1) {
						b++;
						left--;
					}
					if(f3==f4){
						b++;
						right++;
					}
					cnt += f2*b;
					for(int k=i; k<h; k++) for(int l=left; l<=right; l++) {
						if(k==h-1)a1.at(k).at(l)++;
						else a1.at(k).at(l) = a1.at(k+1).at(l);
					}
				}
			}
		}
		cout << cnt << endl;
	}
}
