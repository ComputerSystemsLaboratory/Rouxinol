#include <iostream>
#include <string>   
using namespace std;
 
int main(){
int rank[3],a[10],i = 0,ii = 0,b,c;
rank[0] = 0;
rank[1] = 0;
rank[2] = 0;
while(i <= 9){
	cin >> a[i];
	while(ii <= 2){
		if(rank[ii] < a[i]){
			b = 2 - ii;
			c = ii;
			if(ii == 2){
				rank[2] = a[i];
			}
			if(ii == 1){
				rank[2] = rank[1];
				rank[1] = a[i];
			}
			if(ii == 0){
				rank[2] = rank[1];
				rank[1] = rank[0];
				rank[0] = a[i];
			}		


			break;	
		}
		ii++;
	}
i++;
ii = 0;

}
cout<<rank[0]<<endl<<rank[1]<<endl<<rank[2]<<endl;




}