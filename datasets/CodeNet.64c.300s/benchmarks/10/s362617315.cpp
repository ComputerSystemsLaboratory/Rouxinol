#include <iostream>
int main(){
	int x,y,a,b,i;
	for(i=0;i<10000;i++)
  {
    std::cin >> x >> y;
	if(x==0 && y==0)break;
	if(x>y){
		a=y;
		b=x;
	}else{
		a=x;
		b=y;
	}
    std::cout << a << " " << b <<std::endl;
  }
	return 0;
}