#include<vector>
template<class T>
std::vector<T> factorize(T N){
    std::vector<T> factor;
    for(unsigned i=2;i*i<=N;++i)
        while(N%i==0){
            factor.push_back(i);
            N/=i;
        }
    if(N>1) factor.push_back(N);
    return factor;
}
#include<iostream>
int main(){
    using namespace std;
    int N;
    cin>>N;
    cout<<N<<":";
    vector<int> v=factorize(N);
    for(auto a:v) cout<<' '<<a;
    cout<<endl;
}