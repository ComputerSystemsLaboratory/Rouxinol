#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x,y;
    char op;
    
    
    bool hasEnd = false;
    
    while(!hasEnd){
        int result;
        cin>>x>>op>>y;
    switch(op){
        case '+':
        result = x + y;
        break;
        case '-':
        result = x - y;
        break;
        case '*':
        result = x * y;
        break;
        case '/':
        result = x / y;
        break;
        case '?':
        hasEnd = true;
        break;
    }
    if(!hasEnd){
        cout<<result<<endl;
    }
    
    }
    
    
    
	return 0;
}