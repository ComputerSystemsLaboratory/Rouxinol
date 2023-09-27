#include<iostream>
int main(){
  int n,i,b,f,r,v,A[4][3][10];
  for(i=0; i<4; i++) for(b=0; b<3; b++) for(f=0; f<10; f++) A[i][b][f] = 0;
  std::cin >> n;
  for(i=0; i<n; i++){
    std::cin >> b >> f >> r >> v;
    A[b-1][f-1][r-1] += v;
  }
  for(i=0; i<4; i++){
    for(b=0; b<3; b++){
      for(f=0; f<10; f++) std::cout << " " << A[i][b][f];
      std::cout << "\n";
    }
    if(i != 3){
      for(r=0; r<20; r++) std::cout << "#";
      std::cout << "\n";
    }
  }
  return 0;
}