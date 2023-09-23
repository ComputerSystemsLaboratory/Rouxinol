/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B&lang=jp*/
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
    int minj;
    int count=0;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        minj=i;
        for(int j=i;j<n;j++){
            if(a[j]<a[minj]){
                minj=j;
            }
        }
        if(i!=minj) {
            swap(a[i], a[minj]);
            count++;
        }
    }
    println(a,n);
    cout<<count<<endl;
    return 0;
}