#include "Matrix.h"


using namespace std;




Matrix::Matrix() {
    a.resize(2, std::vector<int>(2));
}

Matrix::Matrix(const Matrix& other) {
    a = other.a;
}

Matrix Matrix::operator+(const Matrix& other) {
    Matrix result;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.a[i][j] = a[i][j] + other.a[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(const int scalar) {
    Matrix result;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.a[i][j] = a[i][j] * scalar;
        }
    }
    return result;
}

Matrix operator-(Matrix m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            m.a[i][j] = -m.a[i][j];
        }
    }
    return m;
}

Matrix operator!(Matrix m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::swap(m.a[i][j], m.a[j][i]);
        }
    }
    return m;
}

std::istream& operator>>(std::istream& in, Matrix& m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            in >> m.a[i][j];
        }
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const Matrix& m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            out << m.a[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

