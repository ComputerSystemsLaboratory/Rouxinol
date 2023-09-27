#include <bits/stdc++.h>

using namespace std;

template<typename T> class Polynomial {
private:
  vector<T> val;
	
public:
	Polynomial() {}

	Polynomial(const vector<T>& val) : val(val) {}

	Polynomial(const int n) : val(vector<T>(n, 0)) {}

	Polynomial(const int n, const T val) : val(vector<T>(n, val)) {}

	Polynomial operator+=(const Polynomial& p) {
    for (int i = 0; i < p.size(); ++i) {
      if (int(val.size()) == i) val.emplace_back(p[i]);
      else val[i] += p[i];
    }
		return *this;
	}
  
	Polynomial operator-=(const Polynomial& p) {
    for (int i = 0; i < p.size(); ++i) {
      if (int(val.size()) == i) val.emplace_back(-p[i]);
      else val[i] -= p[i];
    }
		return *this;
	}
  
	Polynomial operator*=(Polynomial p) {
		return *this = *this * p;
	}
  
	Polynomial operator+(const Polynomial& p) const {
		Polynomial res = *this;
		res += p;
		return res;
	}
	
	Polynomial operator-(const Polynomial& p) const {
		Polynomial res = *this;
		res -= p;
		return res;
	}

  // TODO FFT
	Polynomial operator*(Polynomial& p) {
		Polynomial res(size() + p.size());
    for (int i = 0; i < size(); ++i) {
      for (int j = 0; j < p.size(); ++j) {
        res[i + j] += val[i] * p[j];
      }
    }
		return res;
	}
	
  T& operator[](int i) {
    if (i >= int(val.size())) val.resize(i + 1, 0);
    return val[i];
  }

  int size() const {
    return val.size();
  }

  Polynomial identity() const {
    return Polynomial(1, 1);
  }
};

int main() {
  Polynomial<int> poly;
  poly = poly.identity();
  for (int i = 0; i < 4; ++i) poly *= Polynomial<int>(10, 1);

  int n;
  while (cin >> n) cout << poly[n] << endl;
}