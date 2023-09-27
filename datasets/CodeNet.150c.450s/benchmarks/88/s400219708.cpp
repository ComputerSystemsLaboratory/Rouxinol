#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long int ll;
int w,h;
int main(){
	while(1){
		cin >> h>> w;
		if(w==0&&h==0)break;
		int p=w*w+h*h;
		int ansh=0;
		int answ=0;
		int copy=1e9;
		for(int i=1;i<150;i++){
			for(int j=i+1;j<=150;j++){
				if(p<i*i+j*j&&i*i+j*j<copy){
					copy=i*i+j*j;
					ansh=i;
					answ=j;
				}
				if(i*i+j*j==copy){
					if(i<ansh){
						ansh=i;
						answ=j;
					}
				}
				if(p==i*i+j*j){
					if(i>h&&copy>p){
						copy=i*i+j*j;
						ansh=i;
						answ=j;
					}
					else if(copy==p&&i>h&&i<ansh){
						copy=i*i+j*j;
						ansh=i;
						answ=j;
					}
				}
			}
		}
		cout << ansh << " " << answ << endl;
	}
}
