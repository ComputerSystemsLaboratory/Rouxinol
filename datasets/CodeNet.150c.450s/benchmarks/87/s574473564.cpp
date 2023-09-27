#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

using namespace std;

 
int main(){

	int H;
	while(1){int X[11][11]={};
		cin>>H;if(H==0)break;
		
		int sum=0;

		for(int i=H-1;i>=0;i--)
			for(int j=0;j<5;j++)
				cin>>X[i][j];


		bool f=false;

		while(1){
			int Y=sum;
				for(int i=H-1;i>=0;i--){int p=0,r=1;
					for(int j=0;j<5;j++)
					{
						if(p!=X[i][j]){
							p=X[i][j];r=1;
						}

						else if(p==X[i][j]){
							r++;
							if(r==3){sum+=3*p;//cout<<p<<X[i][j];
								X[i][j-2]=0;X[i][j-1]=0;X[i][j]=0;
							}
							if(r>3){X[i][j]=0;sum+=p;}
						}
					}
				}
				for(int j=0;j<5;j++)
					for(int i=0;i<H;i++)
					{
						if(X[i][j]==0){
							for(int I=i+1;I<H;I++)
								if(X[I][j]>0){X[i][j]=X[I][j];X[I][j]=0;break;
							}
						}
					}
					/*
				for(int i=H-1;i>=0;i--){cout<<endl;
				for(int j=0;j<5;j++)cout<<X[i][j];
				}
			*/

					if(Y==sum)break;
		}
		cout<<sum<<endl;
	}
	return 0;
}