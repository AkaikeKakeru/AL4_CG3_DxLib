#pragma once
#include "Circle.h"
#include "Line.h"
#include "Vector2.h"

class Collider {
public:
	void Initialize();
	void Update(Circle* circle,Line* line);

	bool GetIsHit() const { return isHit_; }
private:
	bool isHit_;
};