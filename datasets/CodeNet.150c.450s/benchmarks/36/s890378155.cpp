#include <iostream>
using namespace std;

int main(void){
    int d;

    while(cin >> d){
        int COUNT = 0;

        for (int i = d; 600 > i; i = i + d){
        	int j = i * i * d;
        	COUNT = COUNT + j;
         }

         cout << COUNT << endl;
    }

    return 0;
}
