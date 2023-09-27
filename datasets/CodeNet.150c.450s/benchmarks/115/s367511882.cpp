#include<iostream>
#include<string>

std::string x,y;
int lcs[1000][1000];

int max(int k,int l){
  if(k>l){
    return k;
  }else{
    return l;
  }
}

void LCS(int i,int j){
  if(x[i] == y[j]){
    lcs[i][j] = lcs[i-1][j-1]+1;
  }else{
    lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
  }
}

void pre(){
  for(int i=0;i<(int)y.size();i++){
    if(x[0] == y[i]){
      for(int j=i;j<(int)y.size();j++){
	lcs[0][j] = 1;
      }
      break;
    }else{
      lcs[0][i] = 0;
    }
  }

  for(int i=0;i<(int)x.size();i++){
    if(x[i] == y[0]){
      for(int j=i;j<(int)x.size();j++){
	lcs[j][0] = 1;
      }
      break;
    }else{
      lcs[i][0] = 0;
    }
  }

}

int main(){
  int q;
  std::cin >> q;
  for(int k=0;k<q;k++){
    std::cin >> x;
    std::cin >> y;
    int size_x=x.size(),size_y=y.size();
    pre();
    for(int i=1;i<size_x;i++){
      for(int j=1;j<size_y;j++){
	LCS(i,j);
      }
    }

    /*for(int i=0;i<size_x;i++){
      for(int j=0;j<size_y;j++){
	std::cout << lcs[i][j] << ' ';
      }
      std::cout << '\n';
    }
    */
    
    std::cout << lcs[size_x-1][size_y-1] << '\n'; 

  }
  return 0;
}

