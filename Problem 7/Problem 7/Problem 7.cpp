#include <iostream>
using namespace std;

int ReadNumber() {
    int number;
    cout << "Enter the number that you want half it : \n";
    cin >> number;
    return number;
}

float GetHalfNumber(int number) {
    return (float)number / 2;
}

void PrintHalfNumber(int number) {
    cout << "\nThe half of " << number << " is " << GetHalfNumber(number) << endl;
}


int main()
{
    PrintHalfNumber(ReadNumber());
    
    return 0;
}
