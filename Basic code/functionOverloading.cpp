#include <iostream>
#include <cmath>

double calculateArea(double side) { // Square
    return side * side;
}

double calculateArea(double length, double width) { 
    return length * width;
}

double calculateArea(double radius, bool isCircle) {
    return M_PI * std::pow(radius, 2);
}

int main() {
    std::cout << "Square Area: " << calculateArea(5.0) << std::endl;
    std::cout << "Rectangle Area: " << calculateArea(4.0, 6.0) << std::endl;
    std::cout << "Circle Area: " << calculateArea(3.0, true) << std::endl;
    return 0;
}
