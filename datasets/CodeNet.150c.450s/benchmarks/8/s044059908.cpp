#include <iostream>
#include <string>
using namespace std;

int main(void){
	string taro, hanako;
	int point_t=0, point_h=0, n;
	cin >>n;
	for(int i=0; i<n; i++){
		cin >>taro >>hanako;
		if(taro>hanako){
			point_t+=3;
		}else if(taro<hanako){
			point_h+=3;
		}else{
			point_t++;
			point_h++;
		}
	}
	cout <<point_t <<" " <<point_h <<endl;
    return 0;
}