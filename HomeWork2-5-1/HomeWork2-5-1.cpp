#include <iostream>

class Figure
{
protected :
	int sides;
public:
	Figure (int sides = 0) : sides(sides) {}
	int get_sides()
	{
		return sides;
	}
	
};

class Tringle : public Figure
{
public: 
	Tringle() : Figure(3) {}
};

class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure(4) {}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Figure figure;
	Tringle tringle;
	Quadrangle quadrangle;
	std::cout << "Количество сторон: " << std::endl;
	std::cout << "Фигура: " << figure.get_sides() << std::endl;
	std::cout << "Треугольник: " << tringle.get_sides() << std::endl;
	std::cout << "Четырехугольник: " << quadrangle.get_sides() << std::endl;

	return 0;
}