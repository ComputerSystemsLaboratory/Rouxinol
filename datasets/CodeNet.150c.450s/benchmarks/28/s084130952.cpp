#include <bits/stdc++.h>
using namespace std;

int number_of_buggage(vector<int> warray,int P,int k){
    int number_of_track = 0;
    int number_of_baggage = 0;
    int iniP = P;
    int i=0;
    while(number_of_track < k && i<warray.size()){
        if(warray.at(i) > P){
            P = iniP;
            number_of_track++;
            continue;
        }
        P -= warray.at(i);
        i++;
        number_of_baggage++;
    }
    return number_of_baggage;
}


int main(){
    int n,k;
    cin >> n >> k;
    vector<int> warray(n);
    for(int i=0; i<n; i++) cin >> warray.at(i);
    int max_ = -1;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += warray.at(i);
        if(max_ < warray.at(i)){
            max_ = warray.at(i);
        }
    }
    int number_nimotsu = number_of_buggage(warray,max_,k);
    int left = max_,right = sum,half;
    while(true){
        half = (left + right) / 2;
        if(number_of_buggage(warray,half,k) == n && number_of_buggage(warray,half-1,k) < n){
            break;
        }else if(number_of_buggage(warray,half,k) == n && number_of_buggage(warray,half-1,k) == n){
            right = half;
        }else{
            left = half + 1;
        }
    }
    cout << half << endl;
}
