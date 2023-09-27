#include <iostream>
using namespace std;

struct Card{char suit; int value;};
void bubble(struct Card a[],int n);
void selection(struct Card a[],int n);
void out(struct  Card a[],int n);
int checker(struct Card a[],struct Card b[],int n);

int main(){
    int i,n;
    Card c1[100+1],c2[100+1];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>c1[i].suit>>c1[i].value;
        //cout<<c1[i].suit<<":"<<c1[i].value<<endl;
    }
    
    for(i=0;i<n;i++)c2[i]=c1[i];//c1???c2????????????
    bubble(c1,n);out(c1,n);
    cout<<"Stable"<<endl;
    selection(c2,n);out(c2,n);
    if(checker(c1,c2,n)==1)cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    
    
}

int checker(struct Card a[],struct Card b[],int n){
    int i,flag=0;
    for(i=0;i<n;i++){
        if(a[i].value==b[i].value&&a[i].suit!=b[i].suit)return 0;
        else if(a[i].value==b[i].value&&a[i].suit==b[i].suit)flag=1;
        
    }
    if (flag)return 1;
    return 0;
}

void bubble(struct Card a[],int n){
    int i,flag=1,j=0;
    while(flag){
        flag=0;
        for(i=n-1;i>j;i--){
            if(a[i].value<a[i-1].value)swap(a[i],a[i-1]),flag=1;
        }
        j++;
    }
}

void selection(struct Card a[],int n){
    int i,j,min,flag;
    for(i=0;i<n;i++){
        min=i;flag=0;
        for(j=i;j<n;j++){
            if(a[j].value<a[min].value){
                min=j;
                flag=1;
            }
        }
        if(flag)swap(a[i],a[min]);
    }
}

void out(struct Card a[],int n){
    int i;
    for(i=0;i<n;i++)i==n-1?cout<<a[i].suit<<a[i].value<<endl:cout<<a[i].suit<<a[i].value<<" ";
}