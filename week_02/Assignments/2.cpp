#include <iostream>

using namespace std;

#define DOUBLE1(x) x + x
#define DOUBLE2(x) 2 * x

int main() {
   int a = 2;
   cout << DOUBLE1(a++) << " " << DOUBLE2(a++) << endl;
   return 0;
}
