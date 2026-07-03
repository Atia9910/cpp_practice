#include <iostream>
#include <string>

// Function Declaration (Prototype)
int multiply(int x, int y);
void displayResult(int result);

int main()
{
    int num1 = 10;
    int num2 = 5;

    // Calling the multiply function
    int product = multiply(num1, num2);

    // Calling the displayResult function
    displayResult(product);

    return 0;
}

// Function Definition
int multiply(int x, int y)
{
    return x * y;
}

// Function Definition
void displayResult(int result)
{
    std::cout << "The product is: " << result << std::endl;
}
