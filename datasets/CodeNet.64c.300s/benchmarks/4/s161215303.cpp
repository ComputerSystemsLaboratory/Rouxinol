#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <typeinfo>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){

    int n1, n2, n3, tmp;
    cin >> n1 >> n2 >> n3;

    if(n1<n2 && n2<n3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}

