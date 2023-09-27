#include"bits/stdc++.h"
using namespace std;
using ll=long long;
template<class T=ll>inline T in(istream&is=cin){T ret;is>>ret;return ret;}
template<class T>inline auto vec2(typename vector<T>::size_type h,typename vector<T>::size_type w,T v=T()){return vector<vector<T>>(h,vector<T>(w,v));}
template<class RandomAccessIterator>inline void psortb(RandomAccessIterator first,RandomAccessIterator last){using P=pair<decltype(first->first),decltype(first->second)>;sort(first,last,[](const P&p1,const P&p2){return p1.second<p2.second||(p1.second==p2.second&&p1.first<p2.first);});}

int main()
{
    ll d=in();
    vector<ll>c(26);
    for(ll i=0;i<26;++i)c[i]=in();
    auto s=vec2<ll>(d,26);
    for(ll i=0;i<d;++i)for(ll j=0;j<26;++j)s[i][j]=in();
    vector<ll>last(26,-1);
    ll v=0;
    for(ll i=0;i<d;++i){
        ll t=in()-1;
        v+=s[i][t];
        last[t]=i;
        for(ll j=0;j<26;++j)v-=c[j]*(i-last[j]);
        cout<<v<<endl;
    }
}
