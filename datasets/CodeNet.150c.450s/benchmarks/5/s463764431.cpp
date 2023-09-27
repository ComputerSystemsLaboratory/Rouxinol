#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int i;
    for(i=0;i<n;i++){
        std::cin >>a[i];
    }
    for(i=n-1;i>=0;i--){
        std::cout << a[i];
        if(i>0){
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
