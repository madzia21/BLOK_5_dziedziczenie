#include "pointery.h"
#include <cmath>
Point2D::Point2D(int _x, int _y) : x(_x), y(_y)
{
}

void Point2D::setX()
{
	this->x = x;
}

void Point2D::setY()
{
	this->y = y;
}

int Point2D::getX() const
{
	return x;
}

int Point2D::getY() const
{
	return y;
}

int Point2D::distance(const Point2D& b) const
{
	int sizeA = b.x - x;
	int sizeB = b.y - y;
	int temp = (sizeA * sizeA) + (sizeB * sizeB);
	int distance = sqrt(temp);
	return distance;
}

Point3D::Point3D(int _x, int _y, int _z) : Point2D(_x,_y), z(_z)
{
}
// też dobrze
//Point3D::Point3D(int _x, int _y, int _z) : Point2D::Point2D(_x, _y), z(_z)
//{
//}

int Point3D::getZ() const
{
	return z;
}

void Point3D::setZ()
{
	this->z = z;
}
