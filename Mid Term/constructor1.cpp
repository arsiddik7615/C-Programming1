#include <iostream>
using namespace std;

class Person {
public:
    string name;
    float height;
    int age;

    Person(string n, float h, int a) {
        name = n;
        height = h;
        age = a;
    }
};

int main()
 {
    Person* person = new Person("Ziaul Haque Polash", 1.8f, 25);

    cout << "Name: " << person->name << endl;
    cout << "Height: " << person->height << endl;
    cout << "Age: " << person->age << endl;

    delete person;  
    
    cout << "Name: " << person->name << endl;
    cout << "Height: " << person->height << endl;
    cout << "Age: " << person->age << endl;

    return 0;
}
