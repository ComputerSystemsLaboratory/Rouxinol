#include <iostream>

using namespace std;

int main() {
    int card,len1,len2,ten1=0,ten2=0;
    cin >> card;

    for(int i=0;i<card;i++){
        string n1,n2;
        cin >> n1 >> n2;

        if(n1>n2){
            ten1+=3;
        }
        else if(n2>n1){
            ten2+=3;
        }
        else {
            ten1++;
            ten2++;
        }
    }

    cout << ten1 << " " <<  ten2 << endl;
    
    return 0;
}