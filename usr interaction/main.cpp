#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    float num1, num2, ans;
    cout << "Hello, World! \nHow old are you? ";
    cin >> age; // Only works with one word
    cout << "So, you are " << age << " years old. \nWhat's your name? ";
    cin >> name;
    cout << "Hello, " << name << " !\nLets add some numbers!";
    cin >> num1 >> num2;
    ans = num1 + num2;
    cout << "The answer will be " << ans << " !\n";


}
