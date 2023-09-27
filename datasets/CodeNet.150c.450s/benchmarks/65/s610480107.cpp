#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector> 
#include<limits>
#include<numeric>
#include<math.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repi(i,a,b) for(int i = (int)(a); i < (int)(b); i++)
#define in(x) cin >> x
#define out(str) cout << str << endl

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

struct Card{char suit,value;};

void bubble(struct Card A[],int N){
    rep(i,N){
        for(int j=N-1;j>=i;j--){
            if(A[j].value<A[j-1].value){
                Card t=A[j];
                A[j]=A[j-1];
                A[j-1]=t; 
            }
        }
    }
}

void selection(struct Card A[],int N){
    rep(i,N){
        int minj=i;
        for(int j=i;j<N;j++){
            if(A[j].value<A[minj].value)minj=j;
        }
        Card t=A[i];
        A[i]=A[minj];
        A[minj]=t; 
    }
}

void print(struct Card A[], int N){
    rep(i,N){
        if(i)cout<<" ";
        cout<<A[i].suit<<A[i].value;
    }
    cout<<endl;
}

bool isStable(struct Card C1[], struct Card C2[],int N){
    rep(i,N){
        if(C1[i].suit!=C2[i].suit)return false;
    }
    return true;
}

int N;

int main(){
    cin>>N;
    Card C1[N],C2[N];
    rep(i,N){
        cin>>C1[i].suit>>C1[i].value;
        C2[i]=C1[i];
    }
    bubble(C1,N);
    selection(C2,N);

    print(C1,N);
    cout<<"Stable"<<endl;
    print(C2,N);
    if(isStable(C1,C2,N))cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
}

