# include <iostream>
# include <stdint.h>
# include <stdio.h>
# include <math.h>
using namespace std;


int main(){
	int n ,a,b,c ,d;
	cin >>n;
	for(int i =1; i <n+1;i++){
		int x[i];
		int a =i%3;
		int b =i %10;
        int c =i/10;
         x[i]= 0;
        while(c >2){
        	int d = c%10;
        	if (d ==3)
        	{
        		x[i]=3;/* code */
        	}
        	c =c/10;
        }
		if (a ==0 ||b ==3 ||x[i] ==3){
			cout <<" "<<i ;
		}
	}
	cout << endl;
return 0;
}

