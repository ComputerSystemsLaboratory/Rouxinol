#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct card{
    char c;
    int num;
};

template<typename T>
void bsort( typename vector<T>::iterator itr_first, typename vector<T>::iterator itr_last){ 
    for(int i=0; i < itr_last - itr_first; ++i){
        for(auto itr=itr_last-1;itr!=itr_first-1+i;--itr){
            if((*itr).num>=(*(itr-1)).num) continue;
            swap(*itr,*(itr-1));
        }
    }
}

template<typename T>
void ssort( typename vector<T>::iterator itr_first, typename vector<T>::iterator itr_last){ 
    for(auto i=itr_first; i!=itr_last; ++i){
        auto itr_min = i;
        for(auto itr=i;itr!=itr_last;++itr) if((*itr_min).num>(*itr).num) itr_min = itr;
        if ((*i).num<=(*itr_min).num) continue;
        swap(*i,*itr_min);
    }
}

template<typename T>
std::vector<T> bsorted(std::vector<T> vec){
    bsort<T>(vec.begin(),vec.end());
    return vec;
}

template<typename T>
std::vector<T> ssorted(std::vector<T> vec){
    ssort<T>(vec.begin(),vec.end());
    return vec;
}

int main(void){cin.tie(0);ios::sync_with_stdio(false);

    int nb; cin>>nb;
    std::vector<card> cards; cards.resize(nb);
    for(auto& a:cards){
        string s; cin>>s;
        a.c = s[0];
        a.num = (int)(s[1]-'0');
    }
    auto bsorted_cards = bsorted<card>(cards);
    for(auto& a:bsorted_cards) cout<<a.c<<a.num<<(&a!=&bsorted_cards.back()? " ":"\n");
    cout<<"Stable\n";
    
    auto ssorted_cards = ssorted<card>(cards);
    for(auto& a:ssorted_cards) cout<<a.c<<a.num<<(&a!=&ssorted_cards.back()? " ":"\n");;
    bool isStable=true;
    for(int i=0;i<cards.size();++i) if(bsorted_cards[i].c!=ssorted_cards[i].c) isStable=false;
    cout<<(isStable? "Stable\n":"Not stable\n");
}