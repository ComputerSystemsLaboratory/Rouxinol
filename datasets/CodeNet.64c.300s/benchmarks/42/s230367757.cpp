#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int N,M;
  int x,y;
  int i,j;
  int l;
  int check=0;
  char d;
  
  while(1){
    cin >> N;
    if(N==0) break;
    
    int flag[21][21]={};

    for(i=0;i<N;++i){
      cin >> x >> y;

      
      flag[x][y]=1;
    }
    
    check =0;
    
    int rx=10,ry=10;
    
    cin >> M;
    
    for(i=0;i<M;++i){
      
      cin >> d >> l;
      
      for(j=1;j<=l;++j){
	
	if(d=='N'){
	  ry++;
	}else if(d=='E'){
	  rx++;
	}else if(d=='S'){
	  ry--;
	}else{
	  rx--;
	}
	if(flag[rx][ry]==1){
	  check++;
	  flag[rx][ry]=0;
	}
      }
    }
 
    
    if(check==N){
      cout << "Yes\n";
    }else{
      cout << "No\n";
    }
  }


  return 0;
}
  