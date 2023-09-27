#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int r, c;	//???????¨?
	cin >> r >> c;
	
	vector< vector<int> > data(r, vector<int>( c ));

	vector<int> r_sum( c + 1, 0 );	//??????????????????
	int c_sum;	//?¨????????????????
	
	
	for(auto ity = data.begin(); ity != data.end(); ity++)
	{
		auto r_sum_it = r_sum.begin();
		c_sum = 0;
		
		for(auto itx = ity->begin(); itx != ity->end(); itx++)
		{
			cin >> *itx;
			
			c_sum += *itx;
			
			*r_sum_it += *itx;
			r_sum_it++;
		}
		ity->push_back( c_sum );
		
		r_sum[c] += c_sum;	//???????????????
		
	}
	
	data.push_back( r_sum );
	
	
	for(auto ity = data.begin(); ity != data.end(); ity++)
	{
		for(auto itx = ity->begin(); itx != ity->end(); itx++)
		{
			cout << *itx;
			if( (itx + 1) != ity->end() )cout << " ";
		}
		cout << endl;
	}
	return 0;
}