#include <iostream>

class Shape
{
protected:
    float _width;
    float _length;

public:
    Shape(int w, int l)
    {
        this->_width = w;
        this->_length = l;
    }
    virtual int getArea() = 0;
    virtual void draw() = 0;
};

class Pentagon
{
private:
    float _sum;

public:
    Pentagon(float sum) { this->_sum = sum; }
    void describe()
    {
        std::cout << "\nThe computed sum is :" << this->_sum << std::endl;
    }
};

class Rectangle : public Shape, public Pentagon
{

public:
    Rectangle(int w, int l) : Shape(w, l), Pentagon(w+l) {}
    int getArea()
    {
        // Implement your choice
        std::cout << "Rectangle getArea invoked!\n";
        return this->_length * _width;
    }
    void draw()
    {
        std::cout << "Rectangle drawn successfully!\n";
    }
};

class Square : Shape
{
public:
    Square(int w, int l) : Shape(w, l)
    {
        this->_width = w;
        this->_length = l;
    }
    int getArea()
    {
        // Implement your choice
        std::cout << "Square getArea invoked!\n";
        return this->_length * _width;
    }
    void draw()
    {
        std::cout << "Square drawn successfully!\n";
    }
};

using std::string;
class Car {
    protected:
        int _num_wheel;
        string _color;
        int _speed;
    public:
        Car(int num_wheel, string color, int speed):_num_wheel(num_wheel), _color(color), _speed(speed){}
        virtual void forward()=0;
        virtual void backward()=0;
};

class Model{};

class Benz: Car, Model{
    public:
    Benz(int num_wheel, string color, int speed):Car(num_wheel, color, speed), Model(){}
    void forward(){
        std::cout<<"Benz moving FORWARD with speed of "<<_speed;
    }
    void backward(){
        std::cout<<"Benz moving BACKWARD with speed of "<<_speed;
    }
};
