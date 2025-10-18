#include <iostream>
using namespace std;

int main() {
    /* char stuff
    * char greetarray[8] = {'W','e','l','c','o','m','e','\0'}; //Array
    * cout << greetarray << "\n";
    *
    * char greetarraystring[] = "Welcome"; // Array also with string
    * cout << greetarraystring << "\n";
    */

    // ACTUAL strings
    string greet = "Welcome";
    cout << greet << "\n";

    // Lets see how long THAT string is
    int greetsize = greet.size();
    cout << "The size of the var 'greet' is " << greetsize << " characters long. \n";

    // Add strings together
    string greetp2 = ", to this project! ";
    string result;
    result = greet + greetp2;
    cout << result << "\n";
    cout << "Now, the size is " << result.size() << "\n";
}
