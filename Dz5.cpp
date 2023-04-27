#include <iostream>
#include <string>
using namespace std;


template <typename T>
T swap(T x, T y) {
    T temp = x;
    x = y; 
    y = temp;
}


template< class B>
class Info {
public:
    B x;
    string a;
    int b;
    Info() = delete;
    Info(B&& x) {
        this->x = x;
    }
    void print(){
        string a = typeid(x).name();
        int b = sizeof(x);
        cout << x << '\n';
        cout << "Type is " << a << '\n';
        cout << "Size is " << b << '\n';
        if (b == 8) {
            cout << "Range from 1.7E-308 to 1.7E+308";
        }
        if (b == 4) {
            cout << "Range from -2 147 483 648 to 2 147 483 647";
        }
        if (b == 1) {
            cout << "Range from -128 to 127";
        }
        if (b == 2) {
            cout << "Range from -32 768 to 32 767";
        }
    }

};


int main()
{
    Info<int> point(34);
    point.print();
}
