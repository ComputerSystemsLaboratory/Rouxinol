#include<iostream>
#include<utility>
#include<queue>
#include<unordered_map>
using namespace std;
typedef pair<char,int> card;

card A[100100] ;
int n;
unordered_map<int,queue<char>> mp;

void replace(int i,int j){
    card temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}

int partition(int p,int r){
    card x=A[r];
    int i=p-1;

    for(int j=p;j<r;++j){
        if(A[j].second<=x.second){
            replace(++i,j);
        }
    }

    replace(++i,r);
    
    return i;
}

void quickSort(int p,int r){
    if(p<r){
        int q=partition(p,r);
        quickSort(p,q-1);
        quickSort(q+1,r);
    }
}

void isStable(){
    bool flag=true;
    for(int i=0;i<n;++i){
        if(A[i].first!=mp[A[i].second].front()){
            flag=false;
        }
        mp[A[i].second].pop();
    }

    if(flag){
        cout<<"Stable\n";
    }
    else{
        cout<<"Not stable\n";
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>A[i].first>>A[i].second;
        mp[A[i].second].push(A[i].first);
    }

    quickSort(0,n-1);

    isStable();

    for(int i=0;i<n;++i){
        cout<<A[i].first<<" "<<A[i].second<<"\n";
    }
}
