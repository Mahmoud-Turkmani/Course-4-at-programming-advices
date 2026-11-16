#include <iostream>
using namespace std;

int ReadNumber() {
    int number;
    cout << "Enter the number : \n";
    cin >> number;
    return number;
}
bool CheckNumber(int num) {
    bool isPass = false;
    if (num >= 50)
        isPass = true;
    return isPass;
}
void PrintStatus(bool status)
{
    cout << "\n";
    if (status)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
}



int main()
{
    PrintStatus(CheckNumber(ReadNumber()));
    
    return 0;
}
