#include <iostream>
using namespace std;
int main() {
    string strg = ("Hello, World!");
    cout << strg << "\n";
    strg.erase (6,1);
    cout << strg << "\n";
    strg.erase (strg.begin()+8);
    cout << strg << "\n";
    strg.erase (strg.begin()+1, strg.end()-1); // Change - into a + for a segmentation fault
    cout << strg << "\n";
}
