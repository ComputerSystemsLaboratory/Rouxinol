    #include<iostream>
    #include<cstdio>
    using namespace std;
     
    int gcd(int a,int b)
    {
    	if(b==0) return a;
    	return gcd(b,a%b);
    } 
     
    int lcm(int a,int b)
    {
    	return a/gcd(a,b)*b;
    }
     
    int main()
    {
    	int a,b;
    	while(cin>>a>>b) {
    		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
    	}
    	return 0;
    }
