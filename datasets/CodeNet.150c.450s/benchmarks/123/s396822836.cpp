#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //def
    int n, j, sum=0;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    
    //equation
    for(int i=0;i<n;i++){
        for(j=2;j<sqrt(num[i]);j++){
            if(num[i]%j==0){
                break;
            }
        }
        if(j > sqrt(num[i])){
            sum++;
        }
    }
    
    //output
    cout << sum << endl;
    
    return 0;
}
