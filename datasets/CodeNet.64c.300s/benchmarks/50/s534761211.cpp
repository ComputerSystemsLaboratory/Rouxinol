#include <iostream>
using namespace std;
//void datalog(int a[],int n);
int BubbleSort(int a[],int n);


int BubbleSort(int a[],int n){
    int s=0;
    for(int i=0;i<n-1 ;i++){
        for(int j=n-1;j>=i+1;j--){
            if(a[j-1]>a[j]){
                swap(a[j],a[j-1]);
                s++;
            }
            
        }   
         
    }
    return s;
}


int main(){

    int a[200],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int s=BubbleSort(a,n);
    //cout <<n <<endl;
    for(int i=0;i<n;i++){
        if(i)cout<<" ";
        cout<<a[i];
    }
    cout <<"\n";
    cout<<s<<endl;
    return 0;
}
