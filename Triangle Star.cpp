#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        // print spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        // print stars
        for (int star = 1; star <= i; star++) {
            cout << "* ";
        }

        cout << endl; // move to next line
    }

    return 0;
}
