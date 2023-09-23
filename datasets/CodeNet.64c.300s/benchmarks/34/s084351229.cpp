/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_A&lang=jp*/
#include <iostream>

using namespace std;

void println(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    int a[100];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    println(a,n);
    for(int i=1;i<n;i++){
        int v=a[i];
        int j;
        for(j=i-1;-1<j && a[j]>v;j--){
            a[j+1]=a[j];
        }
        a[j+1]=v;
        println(a,n);
    }
}