#pragma once
class Point2D
{
	int x = 0;
	int y = 0;
public:
	Point2D(int _x, int _y);
	void setX();
	void setY();
	int getX() const;
	int getY() const;
	int distance(const Point2D& b) const;
};
class Point3D : public Point2D
{
	int z = 0;
public:
	Point3D(int x, int y, int z);
	int getZ() const;
	void setZ();
};

