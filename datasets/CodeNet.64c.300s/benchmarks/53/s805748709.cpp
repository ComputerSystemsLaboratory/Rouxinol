#include<iostream>

using namespace std;

int main(void){

    int i, a, b, c, j;

    j = 0;

    cin >> a >> b >> c;

    for(i = a; i < b + 1; i++){

         if(c % i == 0){ 

             j = j + 1;

         }

    }

    cout << j << endl;

return 0;

}