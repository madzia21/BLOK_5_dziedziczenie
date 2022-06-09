#include <iostream>
#include "pointery.h"
int main()
{
    Point3D punkt1(1, 2, 3);
    std::cout << punkt1.getX() << std::endl;
    std::cout << punkt1.getY() << std::endl;
    std::cout << punkt1.getZ() << std::endl;
    Point2D punkt2(1, 1);
    Point2D punkt3(4, 5);
    std::cout << "odległość między punktami: " << punkt3.distance(punkt2) << std::endl;
    std::cout << "( " << punkt2.getX() << ", " << punkt2.getY() << " ), ( " << punkt3.getX() << ", " << punkt3.getY() << " )" << std::endl;
    std::cout << "odległość między punktami: " << punkt1.distance(punkt3) << std::endl;
    std::cout << "( " << punkt1.getX() << ", " << punkt1.getY() << " ), ( " << punkt3.getX() << ", " << punkt3.getY() << " )" << std::endl;
}