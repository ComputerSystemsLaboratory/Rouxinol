#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <vector>
#include <list>
#include <iterator>

#include <cstdio>
#include <cmath>

#define DIM 2
#define EPS (5*10e-4)

typedef std::vector<double> Vec;
typedef std::vector<Vec> Mat;
typedef std::pair<Mat,Vec> Eq;

double removeMinusZero(double x){
	if ( fabs(x)< EPS ){
		return 0.0;
	}
	else {
		return x;
	}
}

int main(void){
	using namespace std;

	list<Eq> input;

	double a,b,c,d,e,f;

	cout << fixed << setprecision(3);

	while(cin >> a >> b >> c >> d >> e >> f){
		Vec m1, m2;
		m1.push_back(a);
		m1.push_back(b);
		m2.push_back(d);
		m2.push_back(e);

		Vec vec;
		vec.push_back(c);
		vec.push_back(f);

		Mat mat;
		mat.push_back(m1);
		mat.push_back(m2);

		Eq eq = make_pair(mat,vec);

		input.push_back(eq);
	}

	for(auto itr = input.begin(); itr!=input.end(); ++itr){
		auto mat = itr->first;
		auto vec = itr->second;

		Vec output(DIM);

		double det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
		// std::transform(vec.begin(), vec.end(),vec.begin(), std::bind1st(multiplies<double>(),1.0/det));

		mat[0][1] = -mat[0][1];
		mat[1][0] = -mat[1][0];
		swap(mat[0][0],mat[1][1]);

		for (int i=0; i<DIM; i++){
			output[i] = inner_product(vec.begin(), vec.end(), mat[i].begin(), 0);
		}
		std::transform(output.begin(), output.end(),output.begin(), std::bind1st(multiplies<double>(),1.0/det));
		cout << removeMinusZero(output[0]) << " " << removeMinusZero(output[1]) << endl;
	}

}