#pragma once
#include <cmath>
namespace my
{
	struct Point
	{
		float x;
		float y;
	};

	enum Quadrant
	{
		First ,Second ,Third ,Fourth
	};




	float getDistanceTo(Point first, Point second)
	{
		float temp = sqrt(
			pow(first.x - second.x, 2)) +
			pow(first.y - second.y, 2);
		return temp;
	}

	Point getAntipodePoint(Point point)
	{
		Point temp{ -point.x ,-point.y };
		return temp;
	}


	Quadrant getQuadrant(Point point)
	{
		if (point.x >= 0 && point.y >= 0)
		{
			return Quadrant::First;
		}

		else if (point.x <= 0 && point.y >= 0)
		{
			return Quadrant::Second;
		}

		if (point.x <= 0 && point.y <= 0)
		{
			return Quadrant::Third;
		}

		else
		{
			return Quadrant::Fourth;
		}

	}

	void swap(Point * lhs, Point * rhs)
	{
		Point temp = *lhs;
		*lhs = *rhs;
		*rhs = temp;
	}
}
