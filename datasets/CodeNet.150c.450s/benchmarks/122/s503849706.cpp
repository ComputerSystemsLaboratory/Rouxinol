#include<bits/stdc++.h>

using namespace std;

multiset<int> a;

void extract(){
    cout << *(--a.end()) << endl;
    a.erase(--a.end());
}

int main(void){
    char command[10];
    int temp;
    while(true){
        scanf("%s", command);
        if(command[0] == 'i'){
            cin >> temp;
            a.insert(temp);
        }else if(command[1] == 'x'){
            extract();
        }else{
            break;
        }
    }
    return 0;
}
