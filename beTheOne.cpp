// Starting with any positive integer,
// replace the number by the sum of the squares of its digits,
// and repeat the process until the number is equal to 1,
// or it loops endlessly in a cycle which does not include 1.

// used recussive approach

#include <iostream>

using namespace std;

int squareOf(int a)
{
    return a * a;
}

void beTheOne(int x)
{
    int sum = 0;
    int lastDigit = x % 10;

    sum += squareOf(lastDigit);
    x /= 10;

    if (sum != 1)
    {
        cout << sum << endl;
        beTheOne(sum);
    }
    else
    {
        cout << sum << endl;
    }
}

int main()
{
    int x;
    cin >> x;
    beTheOne(x);
    return 0;
}