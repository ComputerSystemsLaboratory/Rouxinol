#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <stack>

using namespace std;


int main(){

	int w, h;

	while(1){
		cin >> h >> w;
		if(h==0 && w==0) break;

		int obi = w*w + h*h;
		int ans[2] = {150, 150};
		int ans_obi;
		int temp;

		for(int i=1 ; i<150 ; i++){
			for(int j=i+1 ; j<151 ; j++){

				temp = i*i + j*j;
				ans_obi = ans[0]*ans[0] + ans[1]*ans[1];

				if(obi < temp && temp < ans_obi){
					ans[0] = i;
					ans[1] = j;
				}
				if(obi == temp){
					if(i>h && temp < ans_obi){
						ans[0] = i;
						ans[1] = j;
					}
				}
				if(temp == ans_obi){
					if(i<ans[0] && temp > obi){
						ans[0] = i;
						ans[1] = j;
					}
				}

			}
		}

		cout << ans[0] << ' ' << ans[1] << endl;


	}
	return 0;
}