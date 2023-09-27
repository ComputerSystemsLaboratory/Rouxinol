#include <iostream>
using namespace std;

int W,H;
int map[51][51];

void fillmap(int i,int j,int s){
     if(map[i][j]!=0)return;
     map[i][j]=s;
     for(int x=i-1;x<i+2;x++){
	  for(int y=j-1;y<j+2;y++){
	       if(!(y>=W||y<0||x>=H||x<0)) fillmap(x,y,s);
	  }
     }
}
    
int main(){
     while(cin>>W>>H,W||H){
	  for(int i=0;i<H;i++){
	       for(int j=0;j<W;j++){
		    int temp;
		    cin>>temp;
		    if(temp)map[i][j]=0;
		    else map[i][j]=-1;
	       }
	  }
	  int s=0;
	  for(int i=0;i<H;i++){
	       for(int j=0;j<W;j++){
		    if(map[i][j]==0){
			 fillmap(i,j,++s);
		    }
	       }
	  }
	  cout<<s<<endl;
     }
}