#include <iostream>

using namespace std;

int main(){
    while(0==0){
    int n;
    cin >> n;
    if(n==0) break;
    int pointA=0,pointB=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if(a<b){
            pointB += a+b;
        }
        if(a>b){
            pointA += a+b;
        }
        if(a==b){
            pointA += a;
            pointB += a;
        }
    }
    cout << pointA <<  " " << pointB << endl;
    }
}