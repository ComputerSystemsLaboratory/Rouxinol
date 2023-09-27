#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int dice[7];
	char c;
	for(int i=1;i<=6;i++){
		cin>>dice[i];
	}
	while(cin>>c){
		switch(c){
		case'E':
			swap(dice[1],dice[4]);
			swap(dice[3],dice[6]);
			swap(dice[3],dice[4]);
			break;
		case'W':
			swap(dice[1],dice[3]);
			swap(dice[4],dice[6]);
			swap(dice[3],dice[4]);
			break;
		case'N':
			swap(dice[1],dice[2]);
			swap(dice[6],dice[5]);
			swap(dice[2],dice[5]);
			break;
		case'S':
			swap(dice[1],dice[5]);
			swap(dice[2],dice[6]);
			swap(dice[2],dice[5]);
			break;
		}
	}
	cout<<dice[1]<<endl;
	return 0;
}