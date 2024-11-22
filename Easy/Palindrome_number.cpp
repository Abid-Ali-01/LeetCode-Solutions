#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) {
            cout << "false" << endl;
            return false;
        }

        int reversed = 0;
        int original = x;

        while (x != 0) {
            int digit = x % 10;

            // Check for overflow
            if (reversed > (INT_MAX - digit) / 10) {
                cout << "false" << endl;
                return false; 
            }

            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // Check if the original number is equal to the reversed number
        if (original == reversed) {
            cout << "true" << endl;
            return true;
        } else {
            cout << "false" << endl;
            return false;
        }
    }
};

int main() {
    Solution s;
    s.isPalindrome(-121); 
    return 0;
}
