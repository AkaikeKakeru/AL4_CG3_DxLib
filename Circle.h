#pragma once
#include "Vector2.h"

class Circle{
public:
	void Initialize();
	void Update(bool isHit);
	void Draw();

	Vector2 pos;
	int r = 0;
	unsigned int color = 0;
};