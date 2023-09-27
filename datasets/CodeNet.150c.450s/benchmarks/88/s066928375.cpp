#include <iostream>

using namespace std;

int main(void){

  int a, b;
  while(cin >> a >> b, a + b){
    double TTT = 150*150 + 150*150,
           t = a*a + b*b;
    int A, B;
    for(int h = 1 ; h <= 150 ; h++){
      for(int w = h + 1 ; w <= 150 ; w++){
	if(t < h*h + w*w && h*h + w*w < TTT){
	  TTT = h*h + w*w;
	  A = h;
	  B = w;
	}else if(a < h && t == h*h + w*w ){
	  TTT = h*h + w*w;
	  A = h;
	  B = w;
	  goto end;
	}
      }
    }
  end:;
    cout << A << " " << B << endl;
  }
 return 0;
}