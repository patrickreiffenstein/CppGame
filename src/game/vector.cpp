#include "vector.h"

//Constructor
vector::vector(int X, int Y) {
    xCoord = X;
    yCoord = Y;
}

[[nodiscard]] int vector::x() const {
    return xCoord;
}

[[nodiscard]] int vector::y() const {
    return yCoord;
}

vector& vector::operator+=(const vector& vectorToAdd) {
    xCoord += vectorToAdd.x();
    yCoord += vectorToAdd.y();
    return *this;
}

void vector::printVector() const {
    std::cout << "(" << xCoord << ", " << yCoord << ")";
}

//Unit vectors
vector vector::up() {
    return vector(0, 1);
}

vector vector::down() {
    return vector(0, -1);
}

vector vector::left() {
    return vector(-1, 0);
}

vector vector::right() {
    return vector(1, 0);
}