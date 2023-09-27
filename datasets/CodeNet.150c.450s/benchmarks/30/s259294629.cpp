#include <iostream>
using namespace std;

int selectionSort(int a[],int n){
    int c=0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]) min=j;
        }
        swap(a[i],a[min]);
        if(i!=min) c++;
    }
    return c;
}

int main(void){
    int n;
    cin>>n;
    int a[n];
    string s="";
    for(int i=0;i<n;i++) cin>>a[i];
    int c=selectionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<s<<a[i];
        s=" ";
    }
    cout<<"\n"<<c<<"\n";
}
