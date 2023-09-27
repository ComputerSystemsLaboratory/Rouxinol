#include<bits/stdc++.h>
using namespace std;
	
int asdf(int h,int w,int i,int j){
	int l, d;
	l = h * h + w * w;
	d = i * i + j * j;
	if(l > d){
		
		return 1;
	} else if(l == d && h > i){
		return 1;
	} 
	return 0;
}

int main(){
	int h, w, l, d;

	while (1){
		int th = 150, tw = 150;
		cin>>h>>w;
		if(h == 0 && w == 0) break;
		
		for(int i = 1; i < 150; i++){
			for(int j = i + 1;j <= 150;j++){
				if(h == i && w == j){
				} else if(asdf(i, j, h, w) == 1){
					if(asdf(th, tw, i, j) == 1){
						th = i;
						tw = j;
					}
				
				}
			}
		}
		
		cout<<th<<" "<<tw<<endl;
		
		
	}
	
	
	return 0;
}

