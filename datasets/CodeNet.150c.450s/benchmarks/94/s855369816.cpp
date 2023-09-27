    #include <iostream>
    using namespace std;
     
    int main() {
    // your code goes here
    int n;
    cin>>n;
    int a[110];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int ans=0;
    for(int i=n-1;i>-1;i--){
    for(int j=0;j<i;j++){
    if(a[j]>a[j+1]){
    int l=a[j+1];
    a[j+1]=a[j];
    a[j]=l;
    ans++;
    }
     
    }
     
    }
    for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
    cout<<a[n-1]<<endl;
    cout<<ans<<endl;
    return 0;
    }