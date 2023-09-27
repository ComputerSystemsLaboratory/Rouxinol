#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a,int p,int r){
    int x = a[r];
    int i = p - 1;
    for(int j = p;j < r;j++){
        if(a[j] <= x){
            i = i+1;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i + 1;
}

int main(){
    int n,part;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    part = partition(a,0,a.size() - 1);
    for(int i = 0;i < n;i++){
        if(i == part){
            printf("[%d]",a[i]);
        }else printf("%d",a[i]);
      if(i != n - 1){
        printf(" ");
      }else {
        printf("\n");
      }
    }
}
