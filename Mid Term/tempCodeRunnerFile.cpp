#include <iostream>
using namespace std;

class Example {
public:
    int value;

    Example(int v) {
        value = v;
    }
};

Example& getStaticObject() {
    static Example staticObj(10);
    return staticObj;
}

int main() {
    Example& obj = getStaticObject();
    cout << "Value: " << obj.value << endl;

    return 0;
}
