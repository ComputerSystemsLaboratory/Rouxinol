#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n,p;
    while(cin >> n >> p && n){
        vector<int> stone(n , 0);
        int cup=p;
        bool flag=true;
        while(flag){
            for(int i =0; i<n;i++){
                if (stone[i]==p)
                {
                    cout << i <<endl;
                    flag =false ;
                    break;
                }

                if(cup>0){
                    stone[i]++;
                    cup--;
                }else if(cup==0){
                    cup+=stone[i];
                    stone[i]=0;
                }
            }
        }
    }
    return 0;
}