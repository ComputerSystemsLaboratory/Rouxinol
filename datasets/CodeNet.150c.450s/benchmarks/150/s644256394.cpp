#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int c[20000+200];
int a[3000000+200];
int n;

void countSort(){
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++){
        c[a[i]]++;
    }
    int index=0;
    for(int i=0;i<10000+10;i++){
        while(c[i]){
            a[index++]=i;
            c[i]--;
        }
        if(index==n)
            break;
    }
    printf("%d",a[0]);
    for(int i=1;i<n;i++){
        printf(" %d",a[i]);
    }
    cout<<endl;
    return;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    countSort();
    return 0;
}