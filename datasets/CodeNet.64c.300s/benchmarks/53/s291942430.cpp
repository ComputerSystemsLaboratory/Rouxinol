#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>


using namespace std;

int main() {
    

    int a,b,c;
    int sum = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++ ){
        if (c%i == 0){
            sum += 1;
        }
    }
    cout << sum << endl;

}

