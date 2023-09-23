#include <iostream>
using namespace std;

int main(){
        int n;
        while( cin >> n && n){
                int count = 0;
                for(int i=1; i<n; i++){
                        int add = 0, sum = 0;
                        while(add < n){
                                sum += (i + add++);
                                if(sum > n) break;
                                if(sum == n) count++;
                        }
                }
                cout << count << endl;
        }
}