#include "bits/stdc++.h"
using namespace std;
typedef long long li;


struct matrix_f2 {
    typedef unsigned long long bits;
    vector<vector<bits> > data;
    const int bits_size;
    int row, col, array_size;

    static bits bit(const int p) {
        return 1ULL << p;
    }

    static matrix_f2 ident (const int d) {
        matrix_f2 id(d);
        for (int i = 0; i < d; ++i) {
            id.set_at(i, i, 1);
        }
        return id;
    }

    matrix_f2 (const int n): bits_size(sizeof(bits) * 8), row(n), col(n), array_size((col + bits_size - 1) / bits_size) {
        data = vector<vector<bits> >(row, vector<bits>(col, 0));
    }

    matrix_f2 (const int r, const int c) : bits_size(sizeof(bits) * 8), row(r), col(c), array_size((col + bits_size - 1) / bits_size) {
        data = vector<vector<bits> >(row, vector<bits>(col, 0));
    }

    matrix_f2 (const matrix_f2& orig): data(orig.data), bits_size(orig.bits_size), row(orig.row), col(orig.col), array_size(orig.array_size) {

    }

    int get_at (const int i, const int j) const {
        return (data[i][j / bits_size] >> (j % bits_size)) & 1;
    }

    void set_at(const int i, const int j, const int v) {
        int array_pos = j / bits_size;
        int bit_pos = j - array_pos * bits_size;
        if (v) {
            data[i][array_pos] |= bit(bit_pos);
        } else {
            data[i][array_pos] &= ~(bit(bit_pos));
        }
        return;
    }

    matrix_f2 trans() const {
        matrix_f2 ret(col, row);
        for (int i = 0; i < ret.row; ++i) {
            for (int j = 0; j < ret.col; ++j) {
                ret.set_at(i, j, get_at(j, i));
            }
        }
        return ret;
    }

    matrix_f2 operator+(const matrix_f2& op) const {
        if (op.row != row || op.col != col) {
            cerr << "matrix_f2::operator+ : dimension error.";
            return matrix_f2(0);
        }
        matrix_f2 ret(row, col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < array_size; ++j) {
                ret.data[i][j] = data[i][j] ^ op.data[i][j];
            }
        }
        return ret;
    }

    matrix_f2 operator*(const matrix_f2& op) const {
        if (col != op.row) {
            cerr << "matrix_f2::operator* : dimension error.";
            return matrix_f2(0);
        }
        matrix_f2 ret(row, op.col), opt = op.trans();
        for (int i = 0; i < ret.row; ++i) {
            for (int j = 0; j < ret.col; ++j) {
                int v = 0;
                for (int k = 0; k < array_size; ++k) {
                    v ^= __builtin_parityll(data[i][k] & opt.data[j][k]);
                }
                ret.set_at(i, j, v);
            }
        }
        return ret;
    }

    matrix_f2 operator^(const int n) const {
        if (n == 1) return matrix_f2(*this);
        if (n == 0) return ident(row);
        matrix_f2 sqr = *this ^ (n / 2);
        matrix_f2 ret = sqr * sqr;
        return n % 2 ? ret * (*this) : ret;
    }

    void append_vector (const vector<int>& v) {
        if (row != v.size()) {
            cerr << "matrix_f2::append_vector : dimension error.";
            return;
        }
        const int array_pos = col / bits_size;
        const int bit_pos = col - array_pos * bits_size;

        if (bit_pos == 0) {
            for (int i = 0; i < row; ++i) {
                data[i].push_back(0);
            }
            ++array_size;
        }
        ++col;

        for (int i = 0; i < row; ++i) {
            if (v[i]) {
                data[i][array_pos] |= bit(bit_pos);
            }
        }
        return;
    }

    int gauss_jordan () {
        int dim = 0;
        for (int c = 0; c < col; ++c) {
            int r = dim;
            for (; r < row; ++r) {
                if (get_at(r, c)) break;
            }
            if (r == row) continue;
            swap(data[dim], data[r]);

            for (int r = 0; r < row; ++r) {
                if (r == dim) continue;
                if (get_at(r, c)) {
                    for (int i = 0; i < array_size; ++i) {
                        data[r][i] ^= data[dim][i];
                    }
                }
            }
            ++dim;
        }
        return dim;
    }

    void print() {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << get_at(i, j) << ' ';
            }
            cerr << endl;
        }
        return;
    }
};


void solve() {
    li n;
    cin >> n;
    vector<li> as(n);
    for (int i = 0; i < n; ++i) {
        cin >> as[i];
    }
    string s;
    cin >> s;

    matrix_f2 null_basis(200, 64);
    li rank = 0;
    for (int i = n - 1; i >= 0; --i) {
        matrix_f2 new_basis(null_basis);
        for (int j = 0; j < 64; ++j) {
            new_basis.set_at(rank, j, (as[i] >> j) & 1);
        }
        li new_rank = new_basis.gauss_jordan();

        if (s[i] == '0') {
            if (new_rank > rank) {
                for (int j = 0; j < 64; ++j) {
                    null_basis.set_at(rank, j, (as[i] >> j) & 1);
                }
                rank = new_rank;
            }
        } else {
            if (new_rank > rank) {
                cout << 1 << '\n';
                return;
            }
        }
    }
    cout << 0 << '\n';
    return;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    li t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }


    return 0;
}