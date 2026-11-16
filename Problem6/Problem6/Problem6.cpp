#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
};
strInfo ReadFullName() {
    strInfo info;
    cout << "Enter first name : \n";
    cin >> info.FirstName;
    cout << "Enter last name : \n";
    cin >> info.LastName;
    return info;

}

string GetFullName(strInfo Info) {
    string FullName = "";
    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string fullName) {
    cout << "welcome in my program " << fullName << "!" << endl;
}


int main()
{
    PrintFullName(GetFullName(ReadFullName()));
}
