#include<iostream>
using namespace std;
int coord[21][21];
int loc_i=10,loc_j=10;

void func_Juge(char c,int l){
  if(c=='N'){
    for(int i=0;i<l;i++){
      loc_i++;
      if(coord[loc_i][loc_j]==1)coord[loc_i][loc_j]=0;
    }
  }else if(c=='S'){
    for(int i=0;i<l;i++){
      loc_i--;
      if(coord[loc_i][loc_j]==1)coord[loc_i][loc_j]=0;
    }
  }else if(c=='E'){
    for(int i=0;i<l;i++){
      loc_j++;
   if(coord[loc_i][loc_j]==1)coord[loc_i][loc_j]=0;
    }
  }else if(c=='W'){
    for(int i=0;i<l;i++){
      loc_j--;
      if(coord[loc_i][loc_j]==1)coord[loc_i][loc_j]=0;
    }
  }
}

int main(){
  int N,M;
 
  while(1){
    cin>>N;
    loc_i=10;
    loc_j=10;
    if(N==0)break;

    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
	coord[i][j]=0;
      }
    }

    for(int i=0;i<N;i++){
	int x,y;
	cin>>x>>y;
	coord[y][x]=1;
    }

    cin>>M;
    for(int i=0;i<M;i++){
      char c;
      int l;
      cin>>c>>l;
      func_Juge(c,l);
  }

    int flag=1;
    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
	if(coord[i][j]!=0){
	  flag=0;
	  break;
	}
      }
    }

    if(flag==0)cout<<"No"<<endl;
    else if(flag==1)cout<<"Yes"<<endl;
  }   

  return 0;
}