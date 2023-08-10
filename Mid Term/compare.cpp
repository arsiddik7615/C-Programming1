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
    Person* person1 = new Person("Ziaul Haque Polash", 1.8f, 25);
    Person* person2 = new Person("Chashi Alom", 1.75f, 30);

    if (person1->age > person2->age) {
        cout << "The older person is: " << person1->name << endl;
    } else if (person1->age < person2->age) {
        cout << "The older person is: " << person2->name << endl;
    } else {
        cout << "Both persons have the same age." << endl;
    }

    delete person1;
    delete person2;

    return 0;
}
