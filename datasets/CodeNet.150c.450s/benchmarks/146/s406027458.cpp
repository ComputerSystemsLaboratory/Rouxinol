#include<iostream>
#include<cmath>

int main(){
  int n;
  double x1,y1,x2,y2,x3,y3,x4,y4;
  const double e = 1e-10;

  std::cin >> n;

  for(int i=0;i<n;i++){
    std::cin >> x1 >> y1
             >> x2 >> y2
             >> x3 >> y3
             >> x4 >> y4;

    if(std::fabs((x1*y3+x2*y4+y2*x3+y1*x4)-(x2*y3+x1*y4+y1*x3+y2*x4))<e){
      std::cout << "YES" << std::endl;
    }else{
      std::cout << "NO" << std::endl;
    }
  }
}