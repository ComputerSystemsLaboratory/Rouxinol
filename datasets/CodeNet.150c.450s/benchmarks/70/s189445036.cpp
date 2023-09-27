#include <iostream>
using namespace std;
int main (){
    int a,b;
    while (cin >> a >>b){
        if(a==0 && b==0)
            break;
        switch (a){
            case 1 : break;
            case 2 : b+=31; break;
            case 3 : b+=60; break;
            case 4 : b+=91; break;
            case 5 : b+=121; break;
            case 6 : b+=152; break;
            case 7 : b+=182; break;
            case 8 : b+=213; break;
            case 9 : b+=244; break;
            case 10 : b+=274; break;
            case 11 : b+=305; break;
            case 12 : b+=335; break;
        }
        switch (b%7){
            case 0: cout << "Wednesday" << endl; break;
            case 1: cout << "Thursday" << endl; break;
            case 2: cout << "Friday" << endl; break;
            case 3: cout << "Saturday" << endl; break;
            case 4: cout << "Sunday" << endl; break;
            case 5: cout << "Monday" << endl; break;
            case 6: cout << "Tuesday" << endl; break;
        }
    }
}