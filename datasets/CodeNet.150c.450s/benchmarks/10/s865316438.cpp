#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Record
{
	Record()
		:b(0), f(0), r(0), v(0)
	{}
	int b;
	int f;
	int r;
	int v;
};

struct RecordComparator
{
	bool operator()( const Record& r1, const Record& r2 ) const
	{
		if( r1.b < r2.b ) return true;
		else if( r1.b > r2.b ) return false;
		else if( r1.f < r2.f) return true;
		else if( r1.f > r2.f) return false;
		else if( r1.r < r2.r) return true;
		else if( r1.r > r2.r) return false;
		else if( r1.v < r2.v) return true;
		else return false;
	}

	static bool isEqual( int b, int f, int r, Record& rec )
	{
		return ( b==rec.b && f==rec.f && r==rec.r );
	}
};

int main()
{
	int n;
	cin >> n;

	vector<Record> vRec;
	vRec.reserve(n);

	for(int i = 0; i < n; ++i){
		Record rec;
		cin >> rec.b >> rec.f >> rec.r >> rec.v;
		vRec.push_back(rec);
	}

	std::sort(vRec.begin(), vRec.end(), RecordComparator());

	int recIndex = 0;

	for(int b = 1; b <= 4; b++){
		for(int f = 1; f <= 3; f++){
			for(int r = 1; r <= 10; ++r){
				cout << " ";
				bool isExist = false;
				if( recIndex < vRec.size() ) 
				{
					Record& rec = vRec[recIndex];
					if( RecordComparator::isEqual( b, f, r, rec ))
					{
						int total = rec.v;
						while(recIndex < vRec.size() - 1 && RecordComparator::isEqual( b, f, r, vRec[++recIndex] ))
							total += vRec[recIndex].v;
						cout << total;
						isExist = true;
					}
				}

				if( !isExist )
					cout << 0;					
			}
			cout << "\n";
		}
		if ( b != 4 )
			cout << "####################\n";
	}

	return 0;
}