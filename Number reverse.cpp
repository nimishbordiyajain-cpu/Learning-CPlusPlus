#include <iostream>
using namespace std;

int main(){
    int num = 12345, rev = 0;
    do {
        rev = rev * 10 + (num % 10);
        num /= 10;
    } while (num != 0);
    cout << "Reverse = " << rev;
    return 0;
}
