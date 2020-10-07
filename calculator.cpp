#include <iostream>

int main()
{
    std::cout << "Type +, -, *, or /: ";
    char op;
    std::cin >> op;
    std::cout << "Type a: ";
    int a;
    std::cin >> a;
    std::cout << "Type b: ";
    int b;
    std::cin >> b;
    int c;
    switch (op)
    {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
    }
    std::cout << a << op << b << '=' << c << std::endl;
    return 0;
}
