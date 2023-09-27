#include<iostream>
#include<string>

int main(){
  std::string x,y;
  int a[1001][1001];
  int cnt=0;

  std::cin>>x;
  std::cin>>y;
  for(int j=0;j<1001;j++){
    for(int k=0;k<1001;k++){
      a[j][k]=0;
      if(j==0) a[j][k]=k;
      if(k==0) a[j][k]=j;
    }
  }

  int b00,b01,b10,b11;
  for(int j=1;j<=x.size();j++){
    for(int k=1;k<=y.size();k++){
      b00=a[j-1][k-1];
      b01=a[j][k-1]+1;
      b10=a[j-1][k]+1;
      if(x[j-1]==y[k-1]){
	if(b00<=b01 && b00<=b10) a[j][k]=b00;
	else if(b01<=b00 && b01<=b10) a[j][k]=b01;
	else a[j][k]=b10;
      }else{
	if(b00+1<=b01 && b00+1<=b10) a[j][k]=b00+1;
	else if(b01<=b00 && b01<=b10) a[j][k]=b01;
	else a[j][k]=b10;
      }
    }

  }

  std::cout<<a[x.size()][y.size()]<<"\n";

  return 0;
}
