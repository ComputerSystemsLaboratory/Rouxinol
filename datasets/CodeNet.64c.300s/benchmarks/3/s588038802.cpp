#include<iostream>
int main(){
    int a,n,i, number[100];
    std::cin >> n;
    for (i = 0; i <= (n - 1); i++){
        std::cin >> number[i];
    }
    for (a=(n-1); a>-1;a--){
        std::cout << number[a];
        if (a != 0){
            std::cout << " ";
        }
    }
    std::cout<<"\n";
    return 0;
}