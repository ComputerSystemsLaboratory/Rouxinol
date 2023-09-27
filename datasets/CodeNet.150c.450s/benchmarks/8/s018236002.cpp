#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    int a=0;
    int b=0;
    string T,H;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> T >> H;
        if(T > H) a+=3;
        else if(T < H) b+=3;
        else if (T==H) {
            a++; b++;
        }
    }
    
    cout << a << " " << b << endl;
}