#include<iostream>



using namespace std;

int f(int x){
    return x*x;
}

int main(){

    int d;
    while (cin >> d)
    {
        int result = 0;
        for (int i = 0; i < 600; i = i + d){
            result += d* f(i);
        }
        cout << result << endl;
    }
    return 0;
}