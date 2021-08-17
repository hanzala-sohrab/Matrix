#include<iostream>
#include<vector>

using namespace std;

class Matrix {
    int r, c;
    vector<vector<int>> mat;
    public:
        Matrix(int noOfRows=0, int noOfColumns=0) {
            r = noOfRows;
            c = noOfColumns;
            mat.resize(noOfRows, vector<int>(noOfColumns));
        }

        Matrix(vector<vector<int>> const &obj) {
            r = obj.size();
            c = obj[0].size();
            mat = obj;
        }

        void fill_matrix(vector<vector<int>> const &obj) {
            int i, j;
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j)
                    mat[i][j] = obj[i][j];
        }

        Matrix operator+(Matrix const &obj) {
            Matrix res;
            if (r != obj.r or c != obj.c)
            {
                cout << "Matrix addition is not possible!\n";
                return res;
            }
            res = Matrix(r, c);
            int i, j;
            for (i = 0; i < obj.r; ++i)
                for (j = 0; j < obj.c; ++j)
                    res.mat[i][j] = mat[i][j] + obj.mat[i][j];
            return res;
        }

        Matrix operator-(Matrix const &obj) {
            Matrix res;
            if (r != obj.r or c != obj.c)
            {
                cout << "Matrix subtraction is not possible!\n";
                return res;
            }
            res = Matrix(r, c);
            int i, j;
            for (i = 0; i < obj.r; ++i)
                for (j = 0; j < obj.c; ++j)
                    res.mat[i][j] = mat[i][j] - obj.mat[i][j];
            return res;
        }

        Matrix operator*(Matrix const &obj) {
            Matrix res;
            if (c != obj.r)
            {
                cout << "Matrix multiplication is not possible!\n";
                return res;
            }
            res = Matrix(r, obj.c);
            int i, j, k;
            for (i = 0; i < r; ++i)
                for (j = 0; j < obj.c; ++j)
                {
                    int s = 0;
                    for (k = 0; k < c; ++k)
                        s += mat[i][k] * obj.mat[k][j];
                    res.mat[i][j] = s;
                }
            return res;
        }

        void print() {
            int i, j;
            for (i = 0; i < r; ++i)
            {
                for (j = 0; j < c; ++j)
                {
                    cout << mat[i][j] << ' ';
                }
                cout << '\n';
            }
        }
};