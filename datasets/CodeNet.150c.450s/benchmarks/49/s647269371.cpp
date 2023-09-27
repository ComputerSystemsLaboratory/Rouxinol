#include <iostream>

using namespace std;

int main (){
    while(true){
    int n;
    cin >> n;
    int max=0;
    int min = 10000;
    int sum = 0;
    int x;
    int count =0;
    
    if(n==0)return 0;
    for(int i=0;i<n;i++){
        cin >> x;
        if(min>x)min=x;
        if(max<x)max=x;
        sum = sum + x;
        count++;
    }
    int average;
    average = (sum -min -max)/(count-2);
    cout << average << endl;
    }

}