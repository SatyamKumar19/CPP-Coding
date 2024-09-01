#include <iostream>
#include <cmath> // For log10 and floor
using namespace std;

int main() {
    int n;
    cout<<"enter the number";
    cin >> n;

    // Ensure the number is positive before calculating digits
    if (n <= 0) {
        cout << n << " is not a valid car number";
        return 0;
    }

    int digit = floor(log10(n) + 1);

    if (digit != 4) {
        cout << n << " is not a valid car number";
    } else {
        int sum = 0;
        int original_n = n;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum % 3 == 0 || sum % 5 == 0 || sum % 7 == 0) {
            cout << "Lucky Number";
        } else {
            cout << "Sorry, it's not my lucky number";
        }
    }

    return 0;
}