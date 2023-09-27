#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
        int a,b,c;
        cin >>a >>b >>c;
        int tmp;
        if(b>=a && b>=c){
            tmp = b;
            b = a;
            a = tmp;
        }else if(c>=a && c>=b){
            tmp = c;
            c = a;
            a = tmp;
        }
        if(a*a == b*b + c*c){
            cout <<"YES" <<endl;
        }else{
            cout <<"NO" <<endl;
        } 
        
    }
        
        return 0;
    }