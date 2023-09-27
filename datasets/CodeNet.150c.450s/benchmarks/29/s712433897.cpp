#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <stack>
#include <queue>
#include <list>

using namespace std;

class c_doubly
{
private:

public:
    c_doubly();
    void f_input();
};

c_doubly::c_doubly()
{
    
}

void c_doubly::f_input()
{
    int n;
    int n_key;
    int i;
    string s;
    list<int>d_doubly;
    
    cin >> n;
   
    for (i = 0; i < n; ++i){
        cin >> s;
        if (s == "insert"){
            cin >> n_key;
            d_doubly.push_front(n_key);
        }else if(s == "delete"){
            cin >> n_key;
            list<int>::iterator it = d_doubly.begin(); 
            while( it != d_doubly.end() )
            {
	            if( *it == n_key )
	                {
                        d_doubly.erase(it);
                        break;
                    }
                ++it;
            }
        }else if(s == "deleteFirst"){
            d_doubly.pop_front();
        }else if(s == "deleteLast"){
            d_doubly.pop_back();
        }
    }
    
    /*
    i = 1;
    list<int>::iterator it = d_doubly.begin(); 
    while( it != d_doubly.end() ) 
    {
        if (i != d_doubly.size()){
            cout << *it << " ";
            ++i;
        }else{
            cout << *it << endl;    
        }
        ++it;
    }
    */
    n = d_doubly.size();
    list<int>::iterator it = d_doubly.begin(); 
    //cout << "n: " << n << endl;
    for ( i = 0; i < n; ++i){
        if (i == n-1){
            cout << *it << endl;
        }else{
            cout << *it << " ";          
        }
        ++it;  
    }
}

int main(){
    
    c_doubly doubly01;
    doubly01.f_input();
    
    return 0;
}