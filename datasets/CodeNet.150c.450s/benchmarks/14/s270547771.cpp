#include <iostream>
#include <string>
using namespace std;

void check_num(int, int);
void end_check_num(int, int);
void include3(int, int, int);

int main(){
    int n;
    cin >> n;
    int i = 1;
    check_num(i, n);
    cout << endl;
}

void check_num(int i, int n){
    int x = i;
    if ( x % 3 == 0 ){
        cout << " " << i;
        end_check_num(i, n);
    } else {
        include3(i, n, x);
    }
}

void include3(int i, int n, int x){
    if ( x % 10 == 3 ){
        cout << " " << i;
        end_check_num(i, n);
    } else {
        x /= 10;
        if ( x ) {
            include3(i, n, x);
        }
        else{
            end_check_num(i, n);
        }
    }
}

void end_check_num(int i, int n){
    if ( ++i <= n ){
        check_num(i, n);
    }
}


    