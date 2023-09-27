#include<iostream>
using namespace std;

int main(){
	int h, w;
	int minh, minw;
	long long int minr;
	while(cin >> h >> w, h || w){
		minh = 150;
		minr = 1000000;
		for(int i=1; i < 150; i++){
			for(int j=1; j < i; j++){
				if(h*h+w*w == i*i+j*j && h < j){
					if(i == w && j == h) continue;
					if(j < minh){
						minh = j;
						minw = i;
						minr = i*i+j*j;
					}
				}
				else if(h*h+w*w < i*i+j*j){
					if(j < minh && i*i+j*j <= minr){
						minh = j;
						minw = i;
						minr = i*i+j*j;
					}
				}
			}
		}
		cout << minh << " " << minw << endl;
	}
}