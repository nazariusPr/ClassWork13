#pragma once
#include <iostream>
template<typename TNum>
class CPoint {
private:
	TNum x;
	TNum y;
public:
	CPoint(TNum a, TNum b): x(a),y(b){}
	CPoint(): x(0),y(0){}

	TNum get_x() const {
		return x;
	}

	TNum get_y() const {
		return y;
	}

	void print_on(std::ostream& os) const {
		os << '(' << x << "; " << y << ')';
	}

	TNum distance(const CPoint& p) const;
	CPoint operator+(const CPoint& p) const {
		return CPoint(this->x + p.x, this->y + p.y);
	}

	CPoint operator-(const CPoint& p) const {
		return CPoint(this->x - p.x, this->y - p.y);
	}
};

template<typename TNum>
inline TNum CPoint<TNum>::distance(const CPoint& p) const
{
	return TNum();
}

template<typename TNum>
std::ostream& operator << (std::ostream & os, const CPoint<TNum> A) {
	A.print_on(os);
	return os;
}