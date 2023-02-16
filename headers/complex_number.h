#include <iostream>


template<typename T> T * sum(T a, T b) { return a+b;}
class Complex {
    private:
    int x,y;
    public:
    Complex(int _x, int _y) : x(_x), y(_y) { }
    Complex * operator+(Complex& c) { 

        Complex * ctemp;
        ctemp->x = this->x +c.x;
        ctemp->y = this->y +c.y;
        return ctemp; 
    }
    void print() { std::cout << this->x << " + i*" << this->y << std::endl;}
    };
void execute_complex_num(){
    Complex c1(20,4), c2(1,78);
    Complex*  res = sum(c1,c2);
    res->print();
}

