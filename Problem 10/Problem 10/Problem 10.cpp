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

float AvgOfNumbers(int SumOfNumbers)
{
    return (float)SumOfNumbers / 3;
}


void PrintSumOfNumbers(int number)
{
    cout << "\nThe sum of numbers is : " << number << endl;
}
void PrintAvgOfNumbers(float avgOfNumbers)
{
    cout << "The average of numbers is : " << avgOfNumbers << endl;
}

int main()
{   
    float Sum = SumNumbers(ReadNumbers());
    PrintSumOfNumbers(Sum);
    PrintAvgOfNumbers(AvgOfNumbers(Sum));
}

