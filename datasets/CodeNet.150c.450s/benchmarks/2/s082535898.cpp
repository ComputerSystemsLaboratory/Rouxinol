#include <iostream>

using namespace std;

int n;
int a[100005];

int partition() {
    int j = -1;
    int x = a[n - 1];
    for (int i = 0; i < n - 1; i++) {
        if (a[i] <= x) {
            j++;
            int tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
    }
    a[n-1]=a[++j];
    a[j]=x;
    return j;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int p=partition();
    for(int i=0;i<p;i++){
        cout<<a[i]<<" ";
    }
    cout<<"["<<a[p]<<"] ";
    for(int i=p+1;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    return 0;
}