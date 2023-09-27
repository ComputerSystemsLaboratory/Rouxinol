#include<cstdio>
#include<iostream>
#include<algorithm>
struct card{
    char suit;
    int num;
    bool operator<(const card &c) const{ return num<c.num; }
    bool operator>(const card &c) const{ return c<*this; }
    bool operator<=(const card &c) const{ return !(*this>c); }
    bool operator>=(const card &c) const{ return !(*this<c); }
    bool operator==(const card &c) const{ return (suit==c.suit && num==c.num); }
    bool operator!=(const card &c) const{ return !(*this==c); }
};
template<typename T>
int partition(T *a,int p,int r){
    T x=a[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(a[j]<=x){
            i++;
            T tmp=a[i]; a[i]=a[j]; a[j]=tmp;
        }
    }
    T tmp=a[i+1]; a[i+1]=a[r]; a[r]=tmp;
    return i+1;
}
template<typename T>
void quicksort(T *a,int p,int r){
    if(p<r){
        int q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
card a[100000],b[100000];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char c;
        int ai;
        std::cin >> c >> ai;
        a[i]={c,ai};
        b[i]={c,ai};
    }
    quicksort(a,0,n-1);
    std::stable_sort(b,b+n);
    int isstable=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])isstable=false;
    }
    printf("%s\n",isstable?"Stable":"Not stable");
    for(int i=0;i<n;i++){
        printf("%c %d\n",a[i].suit,a[i].num);
    }
    return 0;
}
