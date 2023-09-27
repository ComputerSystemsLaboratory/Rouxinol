#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#define mp make_pair
#define pb push_back
#define rep(i,n) for(int i = 0;i < n;i++)
using namespace std;

struct priority_queue{
    int A[2000005];
    int fact;
    priority_queue(){
        for(int i=0;i<2000005;i++){
            A[i]=-1;
        }
        fact = 0;
    }
    int extract(){
        int ret = A[0];
        A[0]=A[--fact];
        A[fact]=-1;
        int start = 0;
        while(start*2+1<fact){
            int c1=start*2+1,c2=start*2+2;
            int next=c2;
            if(A[c1]>A[c2]){
                next = c1;
            }
            if(A[next]>A[start]){
                int temp=A[next];
                A[next]=A[start];
                A[start]=temp;
                start = next;
            }else{
                break;
            }
        }
        return ret;
        
        return ret;
    }
    void insert(int x){
        int start = fact;
        fact++;
        A[start]=x;
        while(start>0){
            int p = (start-1)/2;
            if(A[start]>A[p]){
                int temp =A[start];
                A[start]=A[p];
                A[p]=temp;
            }
            start = p;
        }
        return;
    }
};

int main(){
    priority_queue pq;
    char s[100];
    while(1){
        scanf("%s",s);
        if(!strcmp(s,"extract")){
            printf("%d\n",pq.extract());
        }else if(!strcmp(s,"end")){
            break;
        }else{
            int x;
            scanf("%d",&x);
            pq.insert(x);
        }
    }
    return 0;
                 
}