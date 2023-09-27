#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int main(void){

string input;
int num[2];
int counter = 0;
istringstream stream(input);

while(getline(cin,input)){
        stream.str("");
        stream.clear(stringstream::goodbit);
        stream.str(input);
        stream >> num[0] >> num[1];
        if(num[0] == 0 && num[1] == 0) break;
        else if(num[0] <= num[1]) cout << num[0] << " " << num[1] << "\n";
        else cout << num[1] << " " << num[0] << "\n";
}

}