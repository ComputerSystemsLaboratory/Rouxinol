#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int h, w;
	while(1){
		cin >> h >> w;
		if(h == 0 && w == 0) break;
		int i, j;
		int h1 = 0, w1 = 0, s1 = 0, s2 = 0, s3 = 0, count = 0;
		bool hantei = false;
		for(i = 1;i <= 150;i++){
			for(j = i+1;j <= 150;j++){
				//cout << i << " " << j << endl;
				if(i > h && j != w && (h*h + w*w == i*i + j*j)){
					h1 = i;
					w1 = j;
					hantei = true;
					break;
					//cout << "h1 = " << h1 << " w1 = " << w1 << endl;
				}
			}
			if(hantei) break;
		}
		if(!hantei){
			for(i = 1;i < 150;i++){
				for(j = i+1;j < 150;j++){
					if((h*h + w*w < i*i + j*j) && count == 0){
						s1 = i*i +j*j;
						h1 = i;
						w1 = j;
						//cout << "h1 = " << h1 << " w1 = " << w1 << " s1 = " << s1 << endl;
						count++;
						break;
					}
					else if((h*h + w*w < i*i + j*j) && count != 0){
						s2 = i*i + j*j;
						if(s2 < s1){
							s1 = s2;
							h1 = i;
							w1 = j;
						}
					}
				}
			}
		}


		cout << h1 << " " << w1 << endl;

	}

	return 0;
}