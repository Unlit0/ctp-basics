#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Paras Patil";
    int age = 18;
    char grade = 'A';
    double percentage = 91.80;

    bool isPassed = (percentage >= 40.0);

    cout << "=== Student Information ===" << endl;
    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << endl;
    cout << "Grade      : " << grade << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    cout << boolalpha;
    cout << "Passed     : " << isPassed << endl;

    return 0;
}
