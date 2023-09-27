#include<vector>
#include<utility>
#include<cmath>
class prime_factorizer:private std::vector<std::pair<unsigned long long,unsigned long long>>{
private:
    using std::vector<std::pair<unsigned long long,unsigned long long>>::size_type;
public:
    using std::vector<std::pair<unsigned long long,unsigned long long>>::begin;
    using std::vector<std::pair<unsigned long long,unsigned long long>>::end;
    static std::vector<bool>sieve(unsigned long long n)
    {
        std::vector<bool>is_prime(n+1,true);
        is_prime[0]=is_prime[1]=false;
        for(size_type i=2;i*i<=n;++i){
            if(is_prime[i]){
                for(size_type j=i*2;j<n+1;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        return is_prime;
    }
    prime_factorizer(unsigned long long n)
    {
        std::vector<bool>is_prime=sieve(sqrt(n));
        for(size_type i=2;i<is_prime.size();++i){
            if(is_prime[i]){
                unsigned long long e=0;
                while(n%i==0){
                    ++e;
                    n/=i;
                }
                if(e!=0)emplace_back(i,e);
            }
        }
        if(n!=1)emplace_back(n,1);
    }
};

#include"bits/stdc++.h"
using namespace std;
using ll=long long;
constexpr auto inf=static_cast<ll>(1e18);
template<typename T=ll>inline T in(istream&is=cin){T ret;is>>ret;return ret;}
template<typename T=ll>inline auto vec2(typename vector<T>::size_type h,typename vector<T>::size_type w,T v=T()){return vector<vector<T>>(h,vector<T>(w,v));}
int main()
{
    ll n=in();
    cout<<n<<':';
    prime_factorizer pf(n);
    for(auto f:pf){
        for(ll i=0;i<f.second;++i){
            cout<<' '<<f.first;
        }
    }
    cout<<endl;
}

