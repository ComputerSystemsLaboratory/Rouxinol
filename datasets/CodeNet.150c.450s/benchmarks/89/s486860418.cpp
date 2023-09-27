#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,d,n;
	while(cin>>a>>d>>n){
		if(a==0) break;
		int ct=0,m=-1;
		while(ct<n){
			m++;
			int i=a+d*m;
			ct++;
			if(i>2&&i%2==0){
				ct--;
			}
			else if(i>3&&i%3==0){
				ct--;
			}
			else if(i>5&&i%5==0){
				ct--;
			}
			else if(i>7&&i%7==0){
				ct--;
			}
			else{
				for(int k=1;k<sqrt(i)+3;k++){
					if(i>71&&i%(6*k-1)==0){
						ct--;
						goto end;
					}
					else if(i>73&&i%(6*k+1)==0){
						ct--;
						goto end;
					}
				}
				if(i==1) ct--;
			}
			end:;
		}
		cout<<a+d*m<<endl;
	}
    return 0;
}