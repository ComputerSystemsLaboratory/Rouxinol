#include<iostream>

using namespace std;

int main(void){

    int n;

    cin >> n;

    int a; //??\????????????
    int M = -1000000;
    int m = 1000000;
    long long int S = 0; //?????????

    for(int i = 0; i < n; i++){

      cin >> a;
 
      if(M < a)M = a; //?????§???????±???????

      if(m > a)m = a; //????°????????±???????

      S = S + a; //???

    }

    cout << m << " " << M << " " << S << endl;

return 0;

}