#include <iostream>
using namespace std;
auto pi = 3.141593;

int main() {
    double circumference, radius = 1.5;
    double diameter = radius * radius;

    circumference = pi * diameter;

    cout << circumference;
    cout << "\n";
}
