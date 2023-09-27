#include<iostream>
#include<stack>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	stack<int> st;
	string exps;
    int a, b;

	while( cin>>exps ) {
    	if( "+" == exps ) {
    		b = st.top();
    		st.pop();
    		a = st.top();
    		st.pop();
    		st.push( a + b );
    	} else if( "-" == exps ) {
    		b = st.top();
    		st.pop();
    		a = st.top();
    		st.pop();
    		st.push( a - b );
    	} else if( "*" == exps ) {
    		b = st.top();
    		st.pop();
    		a = st.top();
    		st.pop();
    		st.push( a * b );    		
    	} else {
	   		st.push( atoi( exps.c_str( ) ) );
	   	}
    }
   
    cout<<st.top()<<endl;

    return 0;
}