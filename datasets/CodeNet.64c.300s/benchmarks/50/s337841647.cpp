/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A&lang=jp*/
#include<iostream>

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
    int count=0;
    bool flag= true;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(flag == true){
        flag= false;
        for(int i=n-1;0<i;i--){
            if(a[i]<a[i-1]){
                int tmp=a[i];
                a[i]=a[i-1];
                a[i-1]=tmp;
                flag=true;
                count++;
            }
        }
    }
    println(a,n);
    cout<<count<<endl;
    return 0;
}