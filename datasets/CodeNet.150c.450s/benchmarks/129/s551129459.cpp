#include <iostream>
using namespace std;
int main(){
	int r,c,i,j;
	int sum;
	cin>>r>>c;
	int num[r+1][c+1];
for(i=0;i<r+1;i++){
 for(j=0;j<c+1;j++){
     num[i][j]=0;
}
}
	for(i=0;i<r;i++){
		sum=0;
		for(j=0;j<c;j++){
			cin>>num[i][j];
			sum+=num[i][j];
		}
		num[i][c]=sum;
	}


	for(j=0;j<c+1;j++){
		for(i=0;i<r;i++){
		num[r][j]+=num[i][j];
		}
	}
   for(i=0;i<r+1;i++){
	   for(j=0;j<c+1;j++){
                   if(j){
                      cout<<" ";
                   }
		   cout<<num[i][j];
		   if(j==c){
			   cout<<endl;
		   }
		 }

	   }
   return 0;
   }