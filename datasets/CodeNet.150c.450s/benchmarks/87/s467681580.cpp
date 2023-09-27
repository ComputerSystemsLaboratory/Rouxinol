#include<iostream>

using namespace std;

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){

	int data[10][10];

	int h;

	while(cin>>h){
		if(h==0)break;

		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cin>>data[i][j];
			}
		}

		int ans=0;
		while(1){
			int flag=0;
			for(int i=0;i<h;i++){
				for(int j=0;j<5;j++){
					if(data[i][j]==0)continue;
					int num = data[i][j];
					int cnt=1;

					for(int k=j+1;k<5;k++){
						if(num==data[i][k]){
							cnt++;
						}
						else{
							break;
						}
					}
					if(cnt>=3){
					//	cout<<"unko"<<endl;
						for(int k=j;k<j+cnt;k++){
							data[i][k]=0;
						}
						ans+= cnt*num;
						flag=1;
					}
				}
			}

			/*
			for(int i=0;i<h;i++){
				for(int j=0;j<5;j++){
					cout<<data[i][j]<<" ";
				}
				cout<<endl;
			}

			*/
		//	cout<<endl<<endl;

			for(int i=h-2;i>=0;i--){
				for(int j=0;j<5;j++){
					if(data[i][j]!=0){
						int flag=1;
						for(int k=i+1;k<h;k++){
							if(data[k][j]==0){
								swap(&data[k][j],&data[k-1][j]);
								flag=0;
							}
						}
						if(flag==0){
							i=h-1;
							j=10;
						}
					}
				}
			}

			/*
			for(int i=0;i<h;i++){
				for(int j=0;j<5;j++){
					cout<<data[i][j]<<" ";
				}
				cout<<endl;
			}

			cout<<endl<<endl;
			*/


			if(flag==0)break;
		}

		cout<<ans<<endl;
	}
	return 0;
}