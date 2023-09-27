#include <iostream>
using namespace std;
int main()
{
int i,j,k,n,x,p,q = 0;
    for (;;){
        cin >> n >> x;
        if(n == 0 && x == 0)break;	
        	for (i = 1;i <= n - 2;i++){
        		for (j = i+1;j <=  n - 1;j++){
					for (k = j+1;k <= n;k++){
                        	 p = i + j + k;

                        	    if (p == x){
                        	    	q += 1;

                        	        }  				
					    }
        			}
        	}
        	cout << q << endl;
            q = 0;
    }    

    return 0;
}