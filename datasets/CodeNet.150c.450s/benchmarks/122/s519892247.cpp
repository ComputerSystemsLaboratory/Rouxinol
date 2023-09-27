
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=2e6+5;
const int inf=(1<<31)-1;

int h,s[maxn];

void maxheapify(int i)
{
    int l,r,largest=i;
    l=2*i;
    r=2*i+1;
    if(l<=h&&s[largest]<s[l]){
        largest=l;
    }
    if(r<=h&&s[largest]<s[r]){
        largest=r;
    }
    if(largest!=i){
        swap(s[i],s[largest]);
        maxheapify(largest);
    }
}

int extract()
{
    int maxv;
    if(h<1){
        return -inf;
    }
    maxv=s[1];
    s[1]=s[h--];
    maxheapify(1);
    return maxv;
}

void increasekey(int i,int key)
{
    if(key<s[i]){
        return ;
    }
    while(i>1&&s[i/2]<s[i]){
        swap(s[i],s[i/2]);
        i=i/2;
    }
}

void insert(int key)
{
    h++;
    s[h]=key;
    increasekey(h,key);
}

int main()
{
    string com;
    int key;
    while(cin>>com){
        if(com=="end"){
            break;
        }else if(com=="extract"){
            printf("%d\n",extract());
        }else{
            scanf("%d",&key);
            insert(key);
        }
    }
    return 0;
}
/*
insert 8
insert 2
extract
insert 10
extract
insert 11
extract
extract
end
*/

