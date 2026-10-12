#include <iostream>
using namespace std;

class Box {
private:
    float length, breadth, height;

public:
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }

    friend void volume(Box b);
};

void volume(Box b) {
    float v = b.length * b.breadth * b.height;
    cout << "Volume of Box: " << v << endl;
}

int main() {
    Box b(5, 4, 3);
    volume(b);

    return 0;
}