#include <iostream>
using namespace std;

int main()
{
    int a, b, result;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }

        result = a / b;
        cout << "Result = " << result << endl;
    }
    catch (int)
    {
        cout << "Division by zero is not possible" << endl;
    }

    return 0;
}
