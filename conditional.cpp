#include<iostream>
using namespace std;

int main() {
    int a,b,c;

    cout << "Enter your Numbers: ";
    cin >> a >> b >> c;

    int max = (a > b && c)? a: (b>c)? b:c;

    cout << "The greater number is: " << max << endl;
 
    return 0;
}