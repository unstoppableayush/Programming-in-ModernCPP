#include <iostream>
using namespace std;

int main(){
    int x = 2, y = 7;

    const int &r = ++x + ++y; // Use const to make r constant

    cout << r;
    return 0;
}
