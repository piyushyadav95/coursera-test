#include <iostream>
using namespace std;

long long int reverseNumber(long long int n) {
    long long int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

int main() {
    long long int num;
    cout << "Enter a number: ";
    cin >> num;
    long long int reversed = reverseNumber(num);
    cout << "Reverse of the number: " << reversed << endl;
    return 0;
}
            