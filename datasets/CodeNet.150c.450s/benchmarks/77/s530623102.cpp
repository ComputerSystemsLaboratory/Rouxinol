#include<iostream>
using namespace std;
int main(){
  int box[21][21]={};
  while(1){
    int N,i,I,n,x,y,X=10,Y=10,a=0,l;
    char h;
    cin>>N;
    if(N==0) break;
    else{
      for(i=0;i<N;i++){    
      cin>>x>>y;
      box[x][y]=1;
      }
      cin>>n;
      for(i=0;i<n;i++){
	cin>>h>>l;
	if(h=='N'){
	  for(I=0;I<l;I++){
	    Y++;
	    box[X][Y]=0;
	  }
	}	
	if(h=='S'){
	  for(I=0;I<l;I++){
	    Y--;
	   box[X][Y]=0;
	  }
	}	
	if(h=='E'){
	  for(I=0;I<l;I++){
	    X++;
	    box[X][Y]=0;
	  }
	}	
	if(h=='W'){
	  for(I=0;I<l;I++){
	    X--;
	    box[X][Y]=0;
	  }
	}
      }
      for(i=0;i<21;i++){
	for(I=0;I<21;I++){
	  if(box[i][I]==0) a++;
	}
      }
     
      if(a==441) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
    a=0;
    X=10;
    Y=10;
    for(i=0;i<21;i++){
      for(I=0;I<21;I++){
	box[i][I]=0;
      }
    }
  }
  return 0;
}