#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0, b = 1, next;

    cout << "Fibonacci Series up to 10 terms:\n";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
