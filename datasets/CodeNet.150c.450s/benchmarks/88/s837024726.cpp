#include<iostream>
using namespace std;

int h,w;

int main(){
	while( cin >> h >> w ){
		if(!h)break;
		
		int i,j;
		int ansh = 200,answ = 200;
		for( i = 1; i < 200; i++ ){
			for( j = i+1; j < 200; j++ ){
				if( (h*h+w*w < i*i+j*j) || (h*h+w*w == i*i+j*j && h < i) ){
					//ansh,answより小さいものなら更新
					if( (ansh*ansh+answ*answ > i*i+j*j) || (ansh*ansh+answ*answ == i*i+j*j && ansh > j) ){
						ansh = i;
						answ = j;
					}
				}
			}
		}
		cout << ansh << " " << answ << endl;
	}
	return 0;
}