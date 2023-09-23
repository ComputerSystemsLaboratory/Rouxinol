#include <iostream>
#include <cmath>
using namespace std;


/*
???????§?????§????????????±???3??´
????°???°??????

??????????¨????????????????0??????????§??????????????????§
?????????????????£???????????????????????£????????????????°???\?????¨accepted??§?????????

*/


int e;

/*
int main(){

  while(true){
    int min, ylim, zlim;
    cin >> e;
    min = e;

    ylim = pow(e,1.0/2.0);
    zlim = pow(e,1.0/3.0);
    
    if(e == 0)break;
    for (int z = 0; z <= zlim; ++z){
       for (int y = 0; y <= ylim; ++y){
	  for (int x = 0; x <= e; ++x){
	    if((x + y*y + z*z*z) == e){
	      if((x + y + z) <= min){
		min = x + y + z;
		//cout << "xyz = " << x << " " << y << " " << z << " min = " << min << endl;
		break;
	      }
	    }
	  }
       }
    }
    cout << min << endl;
    
  }
}
*/


int main(){

  while(true){
    int min, ylim, zlim;
    cin >> e;
    min = e;

    ylim = pow(e,1.0/2.0) + 1;
    zlim = pow(e,1.0/3.0) + 1;
    
    if(e == 0)break;
    for (int z = 0; z <= zlim; ++z){
      for (int y = 0; y <= ylim; ++y){
	int x = e - z*z*z - y*y;
	if((x + y + z) <= min && x >= 0){
	  min = x + y + z;
	  //cout << "xyz = " << x << " " << y << " " << z << " min = " << min << endl;
	}
      }
    }
    cout << min << endl;
    
  }
}