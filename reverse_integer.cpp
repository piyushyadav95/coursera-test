#include <limits.h> // for INT_MAX and INT_MIN constants

class Solution {
public:
    int reverse(int x) {
        long long reversed = 0; // Use long long to handle potential overflow
        
        while (x != 0) {
            reversed = reversed * 10 + x % 10; // Append the last digit of x to reversed
            x /= 10; // Move to the next digit in x
        }
        
        // Check for overflow/underflow
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        } else {
            return reversed;
        }
    }
};
