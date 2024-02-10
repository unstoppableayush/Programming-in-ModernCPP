#include <iostream>
using namespace std;

int main(){
    int n = 97; // Declares an integer variable n and initializes it with the value 97.

    const char *p = &n; // Declares a constant character pointer p and initializes it with the address of n. 
                        // This means that p points to the memory location where the value of n is stored.

    *p = 'x'; // Assigns the value 'x' to the memory location pointed to by p. 
               // This modifies the value of n, as p points to the memory location where n is stored.

    cout << n; // Prints the value of n to the console.

    return 0;
}
