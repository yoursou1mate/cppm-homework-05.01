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
    Figure (int sides_count, std::string name)
    {
        this->sides_count = sides_count;
        this->name = name;
    };

   
    int get_sides_count ()
    {
        return sides_count;
    }
    
    std::string get_name ()
    {
        return name;
    }
    
};

class Triangle : public Figure
{
public:
    Triangle (int sides_count) : Figure (3,"Triangle: "){}
};

class Quadrangle : public Figure
{
public:
    Quadrangle (int sides_count) : Figure (4,"Quadrangle: "){}
};


int main(int argc, const char * argv[]) {
   
    Figure figure(0,"Figure: ");
    Triangle triangle(3);
    Quadrangle quadrangle(4);
    std::cout << "Number of sides: " << std::endl;
    
   
    std::cout << figure.get_name();
    std::cout << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name();
    std::cout << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name();
    std::cout << quadrangle.get_sides_count() << std::endl;
    
    
    return 0;
}
