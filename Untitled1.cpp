#include <iostream>
using namespace std;

namespace Prac5_2 {
    int n;
    bool palindrome() {
        int reversedN = 0, originalN = n;

        while (n > 0) {
            int digit = n % 10;
            reversedN = reversedN * 10 + digit;
            n /= 10;
        }

        return originalN == reversedN;
    }

    bool isArmstrong(int n) {
        int originalN = n, sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }

        return originalN == sum;
    }
}

using namespace Prac5_2;

int main() {
    int num;
    cout << "Enter a number (up to 5 digits): ";
    cin >> num;

    n = num; // Assign num to the global variable n

    if (palindrome()) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

