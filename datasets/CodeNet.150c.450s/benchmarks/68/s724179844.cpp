#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){

    int n;

    cin>>n;

    if(n == 0) break;

    vector <int> data(n);

    for(int i=0; i<n; i++){

        cin>>data.at(i);
    }

    sort(data.begin(), data.end());

    reverse(data.begin(),data.end());

    

    vector <int> gap(n);

    for(int i=0; i<n-1; i++){

        gap.at(i) = data.at(i) - data.at(i+1);

        
    }

    sort(gap.begin(),gap.end());

    if(gap.at(0) == 0) cout<<gap.at(1)<<endl;

    else cout<<gap.at(0)<<endl;


    }

    return 0;
    
}
