#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
    while(1){
    int n=0;
    cin >> n;
    if(n==0)return 0;
    int score[n];
    int memory=0; 
    int min=100000000;
    for(int i=0; i<n; i++)cin >> score[i];
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            memory = score[i]-score[j];
            if(memory < 0) memory *= -1;
            if(memory < min)min = memory;
        }
    }
        cout << min << endl;
    }
}
