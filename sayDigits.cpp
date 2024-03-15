#include<bits/stdc++.h>
using namespace std;

int main() {
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;

    // If the number is negative, print "minus" and convert n to positive
    if (n < 0) {
        cout << "minus ";
        n = -n;
    }

    // If n is zero, directly print "zero"
    if (n == 0) {
        cout << "zero";
    }

    // Extract digits of the number and print their word representations
    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; --i) {
        cout << arr[digits[i]];
        if (i != 0) {
            cout << " ";
        }
    }

    return 0;
}
