#include <iostream>
using namespace std;

static int num =0;
void swap(int &a,int &b){
    int tmp;
    tmp =a;
    a = b;
    b = tmp;
    num++;
}

void bubbleSort(int a[],int n){
    int flag = 1;
    while(flag){
        flag =0;
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i-1]){
                swap(a[i],a[i-1]);
                flag =1;
            }
        }
    }
}

int main(){
    int n; cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bubbleSort(a,n);
    for(int i=0;i<n-1;i++){
        cout << a[i] << " ";
    }
    cout << a[n-1] << endl;
    cout << num << endl;

}