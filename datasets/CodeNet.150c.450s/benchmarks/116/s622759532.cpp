#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin >> n >> k;
    while(n!=0||k!=0){
       vector<int> a(n);
        int S[100010];
        for(int j=0;j<n;j++){
            cin >> a.at(j);
        }
        S[0]=0;
        for(int i=1;i<n;i++){
            S[i]=S[i-1]+a.at(i-1);
        }
        x=S[k];
        for(int l=1;l<n-k;l++){
            if(x<S[k+l]-S[l]){
                x=S[k+l]-S[l];
            }
        }
        cout << x << endl;
        cin >> n >> k;
        

    }

}
