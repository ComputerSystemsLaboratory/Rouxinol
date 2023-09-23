#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    long long min_=1000001,max_=-1000001,sum=0,newNum;
    std::cin >> n;
    for(int i=0;i<n;i++){
        std::cin >> newNum;
        
        sum+=newNum;
        max_=max(newNum,max_);
        min_=min(newNum,min_);
    }
    std::cout << min_<<" "<<max_<<" "<<sum << std::endl;
}

