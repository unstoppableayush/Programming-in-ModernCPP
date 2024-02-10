#include <iostream>
using namespace std;

int main(){
    const int &x;                              // LINE-1
    x = 10;                                    // LINE-2
    cout << x;
    return 0;
}
