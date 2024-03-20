#include <iostream>

using namespace std;

int main()
{
    int a = 21;
    int b = 12;

    // Arithmetic Operators

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl; // In modulo operation, the sign of the left operand will determine the sign (+ or -) in the output

    // For examples
    cout << a % b << endl;     // The output will be positive
    cout << (-a % b) << endl;  // The output will be negative
    cout << (a % -b) << endl;  // The output will be positive
    cout << (-a % -b) << endl; // The output will be negative

    // Logical Operators

    cout << (a > b) << endl;
    if (a > b)
    {
        cout << "A is greater" << endl;
    }
    else
    {
        cout << "B is greater" << endl;
    }

    // Relational Operators - && (Logical AND), || (Logical OR), ! (Not Equal)
    if (a > b && b != 0)
    {
        cout << "Result 1" << endl;
    }
    else
    {
        cout << "Result 2" << endl;
    }

    // Bitwise operators - &, |, ^, <<, >>, ~
    cout << (2 | 1) << endl;
    cout << (2 & 1) << endl;
    cout << (2 ^ 1) << endl;
    cout << (4 >> 1) << endl;
    cout << (2 << 1) << endl;
    cout << (~4) << endl;

    // Ternary Operator
    // condition ? expression 1 : expression 2

    // Without Ternary
    int c;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }

    // With ternary
    c = (a > b) ? a : b;

    // Unary Operator - Only uses one operand to work with
    // Post Increment - If c = 0 and a = 1, first it will assign c = 1 then increment a = 2
    a = 1;
    c = a++;
    cout << c << " " << a << endl;

    // Pre Increment - If c = 0 and a = 1, first it will increment a = 2, then assign it to c = 2
    a = 1;
    c = ++a;
    cout << c << " " << a << endl;

    // Post Decrement - Same logic as post increment but instead it will decrement
    a = 1;
    c = a--;
    cout << c << " " << a << endl;

    // Pre Decrement - Same logic as pre increment but instead it will decrement
    a = 1;
    c = --a;
    cout << c << " " << a << endl;

    // Shortcut assignment operator - +=, -=, *=
    c += a; // Same as c = c + a, N/B: This applies to the rest of the bitwise operators as well

    // Other operators - sizeof, new, delete, &(address & operator), *(dereferencing operator)
    cout << sizeof(a) << endl;
    int *ptr = new int(10);
    delete ptr;

    ptr = &a; // In this the ptr will store the address of a
    b = *ptr; // In this used to access the value which stored in address

    return 0;
}