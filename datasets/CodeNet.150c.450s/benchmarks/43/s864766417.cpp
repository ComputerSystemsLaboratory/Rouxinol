#include<iostream>
using namespace std;

int main(){
	
	int n, x, y, sumx=0, sumy=0;

	while(cin >> n && n > 0){
		sumx=0, sumy=0;
		for(int i=0; i<n; i++){
			x=0,y=0;
			cin >> x >> y;
			if(x > y){
				sumx = sumx + x + y;
			}
			else if(x < y){
				sumy = sumy + x + y;
			}
			else if(x == y){
				sumx = sumx + x;
				sumy = sumy + y;
			}
		}
	
		cout << sumx << " " << sumy << endl;
	 }
	return 0;
}