#include <iostream>
using namespace std;

int mult (5); // Global var

/*NOTE TO SELF
 * PG 41: STEP 9
 */
int main() {
    int a (10);
    int b (5);
    int result;

    result = a + b * mult ; // FOLLOWS BIDMAS!!!

    cout << result;
    cout << "\n";
    }
