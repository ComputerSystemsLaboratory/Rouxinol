    #include <iostream>
    using namespace std;
     
    int main() {
    int k[105][105]={0};
    int n,l,a,b;
    cin>>n;
    for(int j=0;j<n;j++){
    cin>>l>>a;
    for(int i=0;i<a;i++){
    cin>>b;
    k[j][b-1]=1;
    }
    }
     
    for(int r=0;r<n;r++){
    for(int e=0;e<n-1;e++){
    cout<<k[r][e]<<" ";
    }
    cout<<k[r][n-1]<<endl;
    }
    return 0;
    }