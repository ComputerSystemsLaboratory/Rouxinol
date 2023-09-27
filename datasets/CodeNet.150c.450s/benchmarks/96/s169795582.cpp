#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    string input;
    string output;
    string phone[10] =
    {
        " ",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    int p;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> input;
        output = "";
        p = input.find('0');
        while(p != string::npos){
            switch(input[0]){
                case '1':
                output += phone[1][(p-1)%5];
                break;
                case '2':
                output += phone[2][(p-1)%3];
                break;
                case '3':
                output += phone[3][(p-1)%3];
                break;
                case '4':
                output += phone[4][(p-1)%3];
                break;
                case '5':
                output += phone[5][(p-1)%3];
                break;
                case '6':
                output += phone[6][(p-1)%3];
                break;
                case '7':
                output += phone[7][(p-1)%4];
                break;
                case '8':
                output += phone[8][(p-1)%3];
                break;
                case '9':
                output += phone[9][(p-1)%4];
                break;
            }
            input.erase(input.begin(), input.begin() + p + 1);
            p = input.find('0');
        }
        cout << output << endl;
    }
}