#include<iostream>
using namespace std;

int main(){

    int a,b,acard,bcard,match;

    while(1){

      a = b = 0;

      cin >> match;

      if(match == 0){
        break;
      }



      for(int i=0;i < match; i++){
        cin >> acard >> bcard;
        if(acard > bcard){
          a += acard+bcard;
        }
        else if(acard < bcard){
          b += acard+bcard;
        }
        else{
          a += acard;
          b += bcard;
        }
      }

      cout << a << ' ' << b << endl;

    }


    return 0;
}