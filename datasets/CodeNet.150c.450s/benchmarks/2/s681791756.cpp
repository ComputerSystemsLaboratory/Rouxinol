
#include<iostream>
#define MAX_NUM 100001

int a[MAX_NUM] = {};

void swap(int i,int j){
    a[0] = a[i];
    a[i] = a[j];
    a[j] = a[0];
}

int partition(int p,int r){
    int x = a[r];
    int i = p-1;
    for(int j=p;j<r;j++){
        if(a[j] <= x){
            i++;
            swap(i,j);
        }
    }
    swap(i+1,r);
        
    return i+1;
}

int main(){
    int n;
    std::cin >> n;
    for(int i=1;i<=n;i++){
        std::cin >> a[i];
    }
    int k=partition(1,n);
    if(k!=1){
        std::cout << a[1] ;
    }
    for(int i=2;i<k;i++){
        std::cout << ' ' << a[i];
    }
    std::cout << " [" << a[k] << ']';
    for(int i=k+1;i<=n;i++){
        std::cout << ' ' << a[i];
    }
    std::cout << '\n';
    return 0;
}

