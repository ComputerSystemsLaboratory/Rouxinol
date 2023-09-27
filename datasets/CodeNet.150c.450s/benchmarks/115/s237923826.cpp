#include<iostream>
#include<string>

int main(){
  int n;
  std::string x,y;
  std::cin>>n;
  int a[1001][1001];
  int b[n];

  for(int i=0;i<n;i++){
    std::cin>>x;
    std::cin>>y;
    for(int j=0;j<1001;j++){
      for(int k=0;k<1001;k++){
	a[j][k]=0;
      }
    }
    for(int j=1;j<=x.size();j++){
      for(int k=1;k<=y.size();k++){
	if(x[j-1]==y[k-1]){
	  a[j][k]=a[j-1][k-1]+1;
	}else{
	  if(a[j-1][k]>a[j][k-1]){
	    a[j][k]=a[j-1][k];
	  }else{
	    a[j][k]=a[j][k-1];
	  }
	}
      }
    }
    b[i]=a[x.size()][y.size()];
  }

  for(int i=0;i<n;i++){
  std::cout<<b[i]<<"\n";
  }

  return 0;
}

