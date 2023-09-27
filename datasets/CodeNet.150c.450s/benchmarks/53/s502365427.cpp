#include<iostream>
#include<vector>

std::vector<int> prime_factorize(int64_t n){
    std::vector<int> result;
    for(int64_t p=2;p*p<=n;++p){
        while(n%p==0){
            result.push_back(p);
            n/=p;
        }
    }
    if(n!=1)result.push_back(n);
    return result;
}

int main(){
    int n;
    std::cin>>n;
    auto pf = prime_factorize(n);
    std::cout<<n<<":";
    for(auto p:pf)std::cout<<" "<<p;
    std::cout<<std::endl;
}
