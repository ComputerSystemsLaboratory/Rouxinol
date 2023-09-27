#include <iostream>
#include <vector>

using namespace std;


template <class T>
class Matrix {
    public:
        Matrix(int h,int w,T u = 1) : mHeight(h), mWidth(w), mUnit(u) {
            mData.assign(h,vector<T>(w));
        }

        Matrix GetIdentity(int n){
            Matrix identity(n,n);
            for(int i = 0; i < n; ++i){
                identity[i][i] = mUnit;
            }
            return identity;
        }

        // matrix multiplication
        Matrix &operator*=(Matrix &m){
            int h = m.GetHeight();
            int w = m.GetWidth();
            // assert(h == mWidth);
            mRes.assign(mHeight,vector<T>(w));
            for(int i = 0; i < mHeight; ++i){
                for(int j = 0; j < w; ++j){
                    T x = 0;
                    for(int k = 0; k < mWidth; ++k){
                       x  += GetCell(i,k) * m.GetCell(k,j);
                    }
                    mRes[i][j] = x;
                }
            }
            mData.swap(mRes);
            return *this;
        }
        //

        // only square matrix
        Matrix operator^(int exp){
            Matrix res = GetIdentity(mHeight);
            while(exp > 0){
                if(exp & 1) res *= mData;
                mData *= mData;
                exp >>= 1;
            }
            return res;
        }
        //

        T& GetCell(int i, int j){ return mData[i][j];}
        int GetHeight() const { return mHeight;}
        int GetWidth() const { return mWidth;}

    private:
        vector<vector<T> > mData;
        vector<vector<T> > mRes;
        int mHeight;
        int mWidth;
        T mUnit;

};

int main(){
    int n,m,l;
    cin >> n >> m >> l;
    Matrix<long long> a(n,m);
    Matrix<long long> b(m,l);
    for(int i = 0;i < n;++i){
        for(int j = 0; j < m; ++j){
            cin >> a.GetCell(i,j);
        }
    }

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < l; ++j){
            cin >> b.GetCell(i,j);
        }
    }
    a *= b;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < l; ++j){
            cout << a.GetCell(i,j) << (j==l-1 ? '\n' : ' ');
        }
    }
    return 0;
}
