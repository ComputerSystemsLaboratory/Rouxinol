#include <iostream>
using namespace std;

int stuff[100005];
int n, k;

bool allocation(int p){
    int sum=0;
    int i=0;
    int truck=1;
    while(i<n){
        if(p<stuff[i]){
            return false;
        }
        sum+=stuff[i];
        if(sum>p){
            truck++;
            sum=0;
            if(truck>k)
                return false;
        }
        else{
            i++;
        }
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> stuff[i];
    }
    
    int low=0, high=1000000006;
    int mid=0;
    while(low+1<high){
        mid = (low+high)/2;
        if(allocation(mid)){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    
    cout << high << endl;
    return 0;
}