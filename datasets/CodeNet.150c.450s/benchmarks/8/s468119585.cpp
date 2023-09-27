#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    string ta, ha;
    int left=0, right = 0;

    for(int i=0; i<n; i++){
        cin >> ta >> ha;
        if(ta > ha){
            left += 3;
        }else if(ta < ha){
            right += 3;
        }else{
            left+=1;
            right+=1;
        }
    }

    cout << left << " " << right << endl;

    return 0;
}