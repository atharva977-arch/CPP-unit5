#include <iostream>
using namespace std;

template <class T>
void swapNumbers(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b << endl;

    swapNumbers(a, b);

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}
