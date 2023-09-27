#include <iostream>
using namespace std;
int num[10001];
int N;

int main(void){
    cin >> N;
    
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                int f = i*i + j*j + k*k + i*j + j*k + k*i;
                if(f > N){
                    break;
                }
                else {
                    num[f]++;
                }
            }
        }
    }
    
    for(int i=1;i<=N;i++)cout << num[i] << endl;
    
}
