#include <iostream>
int main(){
	int x,i;

	for(i=0;i<10000;i++)
  {
    std::cin >> x;
	if(x==0)break;
    std::cout << "Case " << i+1 << ":" << " " << x <<std::endl;
  }
	return 0;
}