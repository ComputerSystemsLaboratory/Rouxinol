#include<algorithm>
#include<functional>
#include<iterator>
#include<iostream>
#include<vector>
using namespace std;
struct C{
    char c;
    int n;
    bool operator<(const C&a)const{
        return n<a.n;
    }
    bool operator<=(const C&a)const{
        return n<=a.n;
    }
    bool operator==(const C&a)const{
        return c==a.c&&n==a.n;
    }
};
std::vector<C>P(100000);
void quickSort(int p,int r){
    if(r-p<2) return;
    int i=p-1;
    for(int j=p;j<r;++j){
        if(P[j]<=P[r-1]){
            i++;
            swap(P[i],P[j]);
        }
    }
    quickSort(p,i);
    quickSort(i+1,r);
}
template<class T, class C = std::less<>>
void mergeSort(T first, T last, C cmp = C()) {
    const auto N = std::distance(first, last);
    if (N <= 1) return;
    const auto mid = std::next(first, N / 2);
    mergeSort(first, mid, cmp);
    mergeSort(mid, last, cmp);
    std::inplace_merge(first, mid, last, cmp);
}
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;++i) cin>>P[i].c>>P[i].n;
    vector<C>Q(100000);
    copy(P.begin(),P.end(),Q.begin());
    quickSort(0,N);
    mergeSort(Q.begin(),Q.begin()+N);
    puts(mismatch(P.begin(),P.end(),Q.begin()).first==P.end()?"Stable":"Not stable");
    for(int i=0;i<N;++i) cout<<P[i].c<<' '<<P[i].n<<endl;
}