#pragma once
#include "Vector2.h"

class Circle{
public:
	void Initialize();
	void Update();
	void Draw();

	Vector2 pos;
	int r;
	unsigned int color;
};