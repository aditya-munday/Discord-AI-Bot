#include <iostream>
using namespace std;

class Student {
    public:
    int age;
    Student() = default;
    Student(const Student &s ) = delete;
    Student &operator=(const Student &) = delete;
};

int main() {
    Student Rohan;
    Rohan.age = 10000;
    Student *ptr = &Rohan;
    cout << (*ptr).age << endl;
    return 0;
}