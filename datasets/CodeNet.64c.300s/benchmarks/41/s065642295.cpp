
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=2e6+5;

int h,s[maxn];

void maxheapify(int i)
{
    int l,r,largest=i;
    l=2*i;
    r=2*i+1;
    if(l<=h&&s[l]>s[i]){
        largest=l;
    }
    if(r<=h&&s[r]>s[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(s[i],s[largest]);
        maxheapify(largest);
    }
}

int main()
{
    scanf("%d",&h);
    for(int i=1;i<=h;i++){
        scanf("%d",&s[i]);
    }
    for(int i=h/2;i>=1;i--){
        maxheapify(i);
    }
    for(int i=1;i<=h;i++){
        cout<<" "<<s[i];
    }
    cout<<endl;
    return 0;
}
/*
10
4 1 3 2 16 9 10 14 8 7
*/

