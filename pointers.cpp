
#include <iostream>

using namespace std;

int main()
{
    int a, b, c; // Declare three integer variables
    int *x = &a, *y = &b; // Declare two pointers: x points to a, y points to b

    *x = 42; // Use pointer x to set a = 42
    *y = 52; // Use pointer y to set b = 52
    a++;     // Increment a by 1 (a = 43)
    b -= 2;  // Decrement b by 2 (b = 50)
    *x += a; // Use pointer x to add a to itself (a = a + a = 86)
    y = &c;  // Change pointer y to point to c instead of b
    *y = *x + b; // Use pointer y to set c = a + b (c = 86 + 50 = 136)

    cout << a << endl;      
    cout << b << endl;      
    cout << c << endl;      
    cout << *x << endl;     
    cout << *y << endl;     
    cout << (x == &a) << endl; 
    cout << (x == &b) << endl; 
    cout << (x == &c) << endl;
    return 0;
}