#include <iostream>
using namespace std;

struct strNumbers
{
    int Num1;
    int Num2;
    int Num3;
};
strNumbers ReadNumbers()
{
    strNumbers numbers;
    cout << "Enter the first number : \n";
    cin >> numbers.Num1;

    cout << "Enter the second number : \n";
    cin >> numbers.Num2;

    cout << "Enter the third number : \n";
    cin >> numbers.Num3;

    return numbers;
}

int SumNumbers(strNumbers numbers)
{
    return numbers.Num1 + numbers.Num2 + numbers.Num3;
}

void PrintSumOfNumbers(int number)
{
    cout << "\nThe sum of numbers is : " << number << endl;
}

int main()
{
    PrintSumOfNumbers(SumNumbers(ReadNumbers()));
}

