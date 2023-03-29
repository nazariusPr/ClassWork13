#pragma once

template<typename TNum>
class CPoint {
private:
	TNum x;
	TNum y;
public:
	CPoint(TNum a, TNum b): x(a),y(b){}
	CPoint(): x(0),y(0){}

};