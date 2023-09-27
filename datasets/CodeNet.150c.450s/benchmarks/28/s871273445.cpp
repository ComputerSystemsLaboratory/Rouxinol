#include <iostream>

using namespace std;

bool isok(int* a, int size, int k, long long mean){
    int number = 1;
    int currentweight = 0;
    int i = 0;
    while(i!=size){
        if(a[i]> mean)
            return false;
        if(currentweight+a[i]<=mean){
            currentweight += a[i];
            i++;
        }
        else{
            currentweight = a[i];
            number++;
            i++;
        }
    }
    return (number <= k);
}

int main(){
    int n,k; cin >> n >> k;
    int weight[n];
    for(int i=0;i<n;i++){
        cin >> weight[i];
    }
    long long left = 0;
    long long right = 1000000000;
    long long mean = (left+right)/2;
    while(left!=mean){
        if(isok(weight, n, k, mean)){
            right = mean;
            mean = (left+right)/2;
        }
        else{
            left = mean;
            mean = (left+right)/2;
        }
    }
    cout << mean+1 << endl;
}