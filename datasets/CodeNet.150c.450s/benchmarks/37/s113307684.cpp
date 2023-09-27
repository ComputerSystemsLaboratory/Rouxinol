#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <vector>
#include <list>
#include <iterator>

#include <cmath>

#define DIM 2
#define EPS (5*10e-4)

typedef std::vector<double> Vec;
typedef std::vector<Vec> Mat;
typedef std::pair<Mat,Vec> Eq;

void removeMinusZero(double& x){
	if ( fabs(x)< EPS ){
		x = 0.0;
	}
}

int main(void){
	using namespace std;
	cout << fixed << setprecision(3);

	list<Eq> input;
	double a,b,c,d,e,f;

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

		auto det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];

		mat[0][1] = -mat[0][1];
		mat[1][0] = -mat[1][0];
		swap(mat[0][0],mat[1][1]);

		Vec output(DIM);
		for (int i=0; i<DIM; i++){
			output[i] = inner_product(vec.begin(), vec.end(), mat[i].begin(), 0);
		}
		transform(output.begin(), output.end(),output.begin(), std::bind2nd(divides<double>(),det));
		for_each(output.begin(), output.end(), [](double& x) -> void { if(abs(x)< EPS){ x=0.0; } });
		cout << output[0] << " " << output[1] << endl;
	}
}