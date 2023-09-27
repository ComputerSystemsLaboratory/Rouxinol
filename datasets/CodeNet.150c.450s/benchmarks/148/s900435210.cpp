#include <iostream>
using namespace std;
int main(void){
  
 int N;
 int C0 = 0;
 int C1 = 0;
 int C2 = 0;
 int C3 = 0;
 cin >> N;
 for (int i = 0; i < N; i++){
 string S;
 cin >> S;

    if (S == "AC"){
        C0++;
    }
    if (S == "WA"){
        C1++;
    }
    if (S == "TLE"){
        C2++;
    }
    if (S == "RE"){
        C3++;
    }
 }
 cout << "AC" << " " << "x" << " " << C0 << endl;
 cout << "WA" <<  " " << "x" << " " <<  C1 << endl;
 cout << "TLE" <<  " " << "x" << " " <<  C2 << endl;
 cout << "RE" <<  " " << "x" << " " <<  C3 << endl;
}
