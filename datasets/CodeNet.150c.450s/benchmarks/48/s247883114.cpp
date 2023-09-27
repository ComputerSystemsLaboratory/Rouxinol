#include <iostream> 
#include <math.h> 
using namespace std;  
int e,x;
int min_mum = 0;

int solve (){
	min_mum = e;
	for (int z=0; z<=ceil(pow(e, 1.0/3)); ++z){
		for (int y=0; y<=ceil(sqrt(e - z*z*z)); ++y){
			x = e- z*z*z - y*y;
			if (x+y+z < min_mum && x>=0){
				min_mum = x+y+z;
			}	 
		}
	}
	return min_mum;
	
}

int main()  
{     
	while (cin >> e && e > 0){
		cout << solve() << endl;
	}        
	
	return 0;  
}  