#include<iostream>
#include<queue>
#include<string>

using namespace std;

class Process {
private:
	string name;
	int time;
public:
	Process( ) { ; }
	Process( string ps, int t ) {
		name = ps;
		time = t;
	}
	string get_name( ) { return name; }
	int get_time( ) { return time; }
	void set_name( string ps ) { name = ps; }
	void set_time( int t ) { time = t; }

};

int main()
{
	int n, q;
	cin>>n>>q;
	
	queue<Process> ps;
	string p;
	int t;
	for( int i=0; i<n; i++ ) {
		cin>>p>>t;
		ps.push( Process( p, t ) );
	}
	
	Process tmp;
	int progress = 0;
	while( !ps.empty( ) ) {
		tmp = ps.front( );
		ps.pop( );
		if( tmp.get_time( ) <= q ) {
			progress += tmp.get_time( );
			cout<<tmp.get_name( )<<' '<<progress<<'\n';
		} else {
			tmp.set_time( tmp.get_time( ) - q );
			ps.push( tmp );
			progress += q;
		}	 
	}

    return 0;
}