#include <iostream>
#include <stack>

int main(){
    using namespace std;

    int count = 0;
    cin >> count;

    stack<int> numberStack;
    for( int i = count; i > 0; --i ){
        int num = 0;
        cin >> num;
        numberStack.push( num );
    }

    while( numberStack.size() != 0 ){
        int num = numberStack.top();
        numberStack.pop();
        cout << num;
        if( numberStack.size() == 0 ){ break; }
        cout << " ";
    }

    cout << endl;
   
    return 0;
}