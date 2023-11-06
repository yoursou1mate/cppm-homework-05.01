//
//  main.cpp
//  cppm-homework-05.01
//
//  Created by a1ex on 11/3/23.
//

#include <iostream>

class Figure
{
protected:
    int sides_count = 0;
    std::string name = "Figure: ";
public:
    Figure (int sides_count){};

   
    void get_sides_count (int sides_count)
    {
        std::cout << sides_count << std::endl;
    }
    
    void get_name (std::string name)
    {
        std::cout << name;
    }
    
};

class Triangle : public Figure
{
public:
    Triangle (int sides_count) : Figure (3){}
};

class Quadrangle : public Figure
{
public:
    Quadrangle (int sides_count) : Figure (4){}
};


int main(int argc, const char * argv[]) {
   
    Figure figure(0);
    Triangle triangle(3);
    Quadrangle quadrangle(4);
    std::cout << "Number of sides: " << std::endl;
    
   
    figure.get_name("Figure: ");
    figure.get_sides_count(0);
    triangle.get_name("Triangle: ");
    triangle.get_sides_count(3);
    quadrangle.get_name("Quadrangle: ");
    quadrangle.get_sides_count(4);
    
    
    return 0;
}
