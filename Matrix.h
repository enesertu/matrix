#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>
using namespace std;



class Matrix {
	
    // overloaded stream operators
    friend std::istream& operator>>(std::istream& in, Matrix& m);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& m);

public:
    // constructors
    Matrix();
    Matrix(const Matrix& other);

    // overloaded binary operators
    Matrix operator+(const Matrix& other);
    Matrix operator*(const int scalar);

	    // overloaded unary operators
    Matrix operator-(void);
    Matrix operator!(void);

private:
    std::vector<std::vector<int> > a;
};


#endif

