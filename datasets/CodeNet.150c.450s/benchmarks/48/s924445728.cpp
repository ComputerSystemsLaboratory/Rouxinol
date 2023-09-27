#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

  int e;
  while(cin >> e, e){
    int minx = 1111111111;

    for(int i = 0; i*i <= e; i++){
      for(int j = 0; j*j*j <= e; j++){

        int z = e-(i*i+j*j*j);
        int tmp = i*i + j*j*j + z;

        if(z >= 0 && tmp == e){
          minx = min(minx, i+j+z);

        }

      }
    }

    cout << minx << endl;

  }

  return 0;

}

