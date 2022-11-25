#pragma once
#include "Vector2.h"

class Line{
public:
	void Initialize();
	void Update();
	void Draw();

	Vector2 posS;
	Vector2 posE;

	unsigned int color;
};