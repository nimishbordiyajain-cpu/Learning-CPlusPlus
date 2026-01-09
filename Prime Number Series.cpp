#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime;

    cout << "Prime numbers from 1 to 100 are:\n";

    for (num = 2; num <= 100; num++) {
        isPrime = true;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}
