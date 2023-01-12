#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>
using namespace std;

class Matrix {
public:
    // constructors
    Matrix();
    Matrix(const Matrix& other);

    // overloaded binary operators
    Matrix operator+(const Matrix& other);
    Matrix operator*(const int scalar);

    // overloaded unary operators
    friend Matrix operator-(Matrix m);
    friend Matrix operator!(Matrix m);

    // overloaded stream operators
    friend std::istream& operator>>(std::istream& in, Matrix& m);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& m);

private:
    std::vector<std::vector<int> > a;
};


#endif
