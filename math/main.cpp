#include <iostream>
#include <cmath> // math lib
using namespace std;

int main() {
    // c++ uses bidmas
    float numbers (100); // Supports decimal
    numbers+=10; /* add 10
    numbers = numbers + 10; */
    cout << numbers << "\n";

    numbers-=10; /*Subtract 10
    numbers = numbers - 10; */
    cout << numbers << "\n";

    numbers*=10; /* multiply by 10
    numbers = numbers * 10; */
    cout << numbers << "\n";

    numbers/=10; /* divide by 10
    numbers = numbers / 10; */
    cout << numbers << "\n";

    // Powers
    numbers = pow(numbers, 2); // power of 2 (100*100)
    cout << numbers << "\n";

    // Square root
    numbers = sqrt(numbers);
    cout << numbers << "\n";

    // PI
     double area, radius = 1.5; // double floating point
     area = M_PI /*Value of pi */ * radius * radius;
     cout << area << "\n";


}
