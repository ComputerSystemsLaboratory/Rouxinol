#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
bool sagyou(vector<int> &w, int &k, int &P)
{
    int sum = 0;
    int n = w.size();
    int j = 0;
     
     
    for(int i=0; i<n; i++){
        if(P < w[i]){
            return false;
        }
        if(P < sum + w[i]){
            j++;
            if(j == k){
            return false;
            }   
            sum = 0;
        }
        sum += w[i];
         
    }
    return true;
}
 
int allocation(vector<int> &w, int &k)
{
    int ave =  accumulate(w.begin(), w.end(), 0) / k;
    int max = *max_element(w.begin(),w.end());
    int P = std::max(ave,max);
    while(sagyou(w,k,P)==false){
        P++;
    }
     
    return P;
}
 
int main()
{
    int n,k;
    vector<int> w;
 
    cin >> n >> k;
     
    w.resize(n);
     
    for(int i=0; i<n; i++){
        cin >> w[i];
    }
     
    cout << allocation(w,k) << endl;
}