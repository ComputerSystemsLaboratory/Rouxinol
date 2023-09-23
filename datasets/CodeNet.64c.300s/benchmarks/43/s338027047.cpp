#include <iostream>
using namespace std;

#define A 0
#define B 1

int main(){
    int info[2], math[2], science[2], english[2];

    cin >> info[A] >> math[A] >> science[A] >> english[A];
    cin >> info[B] >> math[B] >> science[B] >> english[B];

    cout << max(info[A]+math[A]+science[A]+english[A], info[B]+math[B]+science[B]+english[B]) << endl;
}