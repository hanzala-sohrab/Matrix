#include "matrix.h"

int main() {
    vector<vector<int>> mat1 = {{1, 2, 3}, 
                                {6, 5, 4}, 
                                {7, 8, 9}};

    vector<vector<int>> mat2 = {{6, 5}, 
                                {7, 8}, 
                                {1, 2}};

    Matrix M1(mat1);
    Matrix M2(mat2);

    // Matrix addition
    Matrix M3 = M1 + M2;
    M3.print();

    // Matrix subtraction
    Matrix M4 = M1 - M2;
    M4.print();

    // Matrix multiplication
    Matrix M5 = M1 * M2;
    M5.print();
    return 0;
}
