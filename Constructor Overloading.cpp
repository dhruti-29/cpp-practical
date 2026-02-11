#include <iostream>
using namespace std;

class Box {
    int l, b, h;

public:
  
    Box() {
        l = b = h = 1;
    }

    Box(int side) {
        l = b = h = side;
    }


    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }

    void volume() {
        cout << "Volume = " << l * b * h << endl;
    }
};

int main() {
    Box b1;
    b1.volume();

    Box b2(4);
    b2.volume();

    Box b3(4, 5, 10);
    b3.volume();

    return 0;
}
