#include<iostream>
using namespace std;

int main(){
        int n, num[101] = {0}, max = 0;
        while(cin >> n){
                num[n]++;
                if(max < num[n]) max = num[n];
        }
        for(int i = 0; i <= 101; i++){
                if(num[i] == max) cout << i << endl;
        }
}