#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

void include3(int x, int i){
        if(x % 10 == 3)cout << " " << i;
        else {
                x /= 10;
                if(x) include3(x, i);
        }
}

void check_num(int i){
        int x = i;
        if(x % 3 == 0)cout << " " << i;
        else{
                include3(x, i);
        }
}

void call(int n){
		int i = 1;
        while(++i <= n){
                check_num(i);
        }
}


int main(){
        int n;
        cin >> n;
        call(n);
        cout << endl;
}