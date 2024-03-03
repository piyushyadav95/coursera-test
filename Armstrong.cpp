#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;

    // store the number of digits of num in n
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // check if num is Armstrong
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return result == num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
