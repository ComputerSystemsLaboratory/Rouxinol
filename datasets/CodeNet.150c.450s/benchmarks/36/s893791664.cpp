#include<iostream>
using namespace std;

int main(void){

    int area = 0;

    int n,x,y;
    while(cin >> n){

        for(int i = 0;i < 600 / n -1 ;i++){

            x = (i+1) * n;
            y = x * x;
            area += n * y;
        }
        cout << area << endl;
        area = 0;
    }


    return 0;
}