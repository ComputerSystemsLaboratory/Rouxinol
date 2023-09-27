
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=1e5+5;

int h,s[maxn];

int parent(int i)
{
    return i/2;
}

int left(int i)
{
    return i*2;
}

int right(int i)
{
    return i*2+1;
}

int main()
{
    scanf("%d",&h);
    for(int i=1;i<=h;i++){
        scanf("%d",&s[i]);
    }
    for(int i=1;i<=h;i++){
        cout<<"node "<<i<<": key = "<<s[i]<<", ";
        if(parent(i)>=1){
            cout<<"parent key = "<<s[parent(i)]<<", ";
        }
        if(left(i)<=h){
            cout<<"left key = "<<s[left(i)]<<", ";
        }
        if(right(i)<=h){
            cout<<"right key = "<<s[right(i)]<<", ";
        }
        cout<<endl;
    }
    return 0;
}
/*
5
7 8 1 2 3
*/

