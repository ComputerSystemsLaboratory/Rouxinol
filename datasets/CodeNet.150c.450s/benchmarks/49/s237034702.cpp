#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;

    while(true){
        vector<int> point;
        int data;
        int ave=0;

        cin>>n;
        if(n==0){
            break;
        }
        for(int i=0; i<n; i++){
            cin>>data;
            point.push_back(data);
        }
        sort(point.begin(), point.end());
        for(int i=1; i<point.size()-1; i++){
            ave+=point[i];
        }
        cout<<ave/(point.size()-2)<<endl;
    }

    return 0;
}