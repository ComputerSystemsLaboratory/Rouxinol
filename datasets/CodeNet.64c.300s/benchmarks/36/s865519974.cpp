#include<iostream>

void sort(int*,int*,int*);
void swap(int*,int*);
void print(int,int,int);

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
   // cout<<&a<<endl;
    sort(&a,&b,&c);
    print(a,b,c);
    return 0;
}

void sort(int* a,int* b,int* c){
    //cout<<*a<<endl;
    if(*a>*b){
        swap(*a,*b);
    }
    if(*b>*c){
        swap(*b,*c);
    }
    if(*a>*b){
        swap(*a,*b);
    }
}

void swap(int x,int y){
    int tmp=x;
    x=y;
    y=tmp;
}

void print(int a,int b,int c){
    cout<<a<<" "<<b<<" "<<c<<endl;
}

