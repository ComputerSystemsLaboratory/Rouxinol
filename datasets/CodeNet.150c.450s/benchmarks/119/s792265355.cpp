#include <iostream>
using namespace std;
int main(){
	int w,h,ct,num2;
	while(cin>>w>>h){
		ct=0;
		if(w==0&&h==0) break;
		int c[w+2][h+2];
		for(int i=0;i<w+2;i++){
			for(int j=0;j<h+2;j++){
				c[i][j]=0;
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>c[j+1][i+1];
			}
		}
		for(int i=0;i<w+2;i++){
			for(int j=0;j<h+2;j++){
				if(c[i][j]==1){
					c[i][j]=2;
					do{
						num2=0;
						for(int ii=1;ii<w+1;ii++){
							for(int jj=1;jj<h+1;jj++){
								if(c[ii][jj]==2&&c[ii-1][jj-1]==1){
									c[ii-1][jj-1]=2;
									num2++;
								}
								if(c[ii][jj]==2&&c[ii-1][jj]==1){
									c[ii-1][jj]=2;
									num2++;
								}
								if(c[ii][jj]==2&&c[ii-1][jj+1]==1){
									c[ii-1][jj+1]=2;
									num2++;
								}
								if(c[ii][jj]==2&&c[ii][jj-1]==1){
									c[ii][jj-1]=2;
									num2++;
								}
								if(c[ii][jj]==2&&c[ii][jj+1]==1){
									c[ii][jj+1]=2;
									num2++;
								}
								if(c[ii][jj]==2&&c[ii+1][jj-1]==1){
									c[ii+1][jj-1]=2;
									num2++;
								}
								if(c[ii][jj]==2&&c[ii+1][jj]==1){
									c[ii+1][jj]=2;
									num2++;
								}
								if(c[ii][jj]==2&&c[ii+1][jj+1]==1){
									c[ii+1][jj+1]=2;
									num2++;
								}
							}
						}
					} while(num2>0);
					ct++;
					for(int ii=0;ii<w+2;ii++){
						for(int jj=0;jj<h+2;jj++){
							if(c[ii][jj]==2){
								c[ii][jj]=0;
							}
						}
					}
				}
			}
		}
		cout<<ct<<endl;		
	}
    return 0;
}