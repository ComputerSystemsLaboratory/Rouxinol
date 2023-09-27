#include<iostream>
using namespace std;
#include<string>

int main()
{
    string W, T;
    int count = 0;
    int i, len;

    cin >> W;
    len = 0;
	for(i = 0; W[i]; i++){
        if(W[i] <= 'Z') W[i] = W[i] + 32;
        len++;
    }
    while(1){
        cin >> T;
        if(T == "END_OF_TEXT") break;

		for(i = 0; T[i]; i++){ if(T[i] <= 'Z') T[i] = T[i] + 32;}

        if(W == T) count++;
    };

    cout << count << endl;

    return 0;
}