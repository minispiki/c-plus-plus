#include <iostream>
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
}
