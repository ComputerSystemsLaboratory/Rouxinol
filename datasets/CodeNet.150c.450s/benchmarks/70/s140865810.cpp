#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int m,d,x,i;

  while(1){
    cin>>m>>d;
    if(m==0&&d==0)break;
    x=0;
    for(i=1;i<m;i++){
      switch(i){
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
	x+=3;
	break;      
      case 2:
	x+=1;
	break;
      default:
	x+=2;
      }
    }
  switch((x+d-1)%7){
      case 0:
	cout<<"Thursday"<<endl;
	break;

      case 1:
	cout<<"Friday"<<endl;
	break;

      case 2:
	cout<<"Saturday"<<endl;
	break;

      case 3:
	cout<<"Sunday"<<endl;
	break;

      case 4:
	cout<<"Monday"<<endl;
	break;

      case 5:
	cout<<"Tuesday"<<endl;
	break;

      case 6:
	cout<<"Wednesday"<<endl;
	break;
  }
  }  
  return 0;
}  
  