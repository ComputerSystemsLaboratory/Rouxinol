#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <queue>
#include <vector>
#include <cmath>
#include <map>
#include <stack>
#include <algorithm>
typedef long long int ll;
using namespace std;

struct card{char suit,value;};

void bubble(struct card a[],int n)
{
    for (int i=0; i<n; i++) {
        for (int j=n-1; j>=i; j--) {
            if (a[j].value<a[j-1].value) {
                card t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
}
void myselect(struct card a[],int n)
{
    for (int i=0; i<n; i++) {
        int minj=i;
        for (int j=i; j<n; j++) {
            if (a[j].value<a[minj].value) {
                minj=j;
            }
        }
        card t=a[i];a[i]=a[minj];a[minj]=t;
    }
}

void print(struct card a[],int n)
{
    for (int i=0; i<n; i++) {
        if (i) {
            cout<<' ';
        }
        cout<<a[i].suit<<a[i].value;
    }
    cout<<endl;
}

bool istable(struct card c1[],struct  card c2[],int n)
{
    for (int i=0; i<n; i++) {
        if (c1[i].suit!=c2[i].suit) {
            return false;
        }
    }
    return true;
}

int main(){
    //freopen("/Users/mac/Desktop/C++?¨????/test/test.txt", "r", stdin);
    card c1[110],c2[110];
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>c1[i].suit>>c1[i].value;
    }
    for (int i=0; i<n; i++) {
        c2[i]=c1[i];
    }
    bubble(c1, n);
    myselect(c2, n);
    print(c1, n);
    cout<<"Stable"<<endl;
    print(c2,n);
    if (istable(c1, c2, n)) {
        cout<<"Stable"<<endl;
    }
    else{
        cout<<"Not stable"<<endl;
    }
    return 0;
}