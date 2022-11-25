#include "Collider.h"
#include "Circle.h"
#include "Line.h"
#include "Vector2.h"
#include <cmath>

void Collider::Initialize(){
}

void Collider::Update(Circle* circle,Line* line){
	Vector2 distanceS = circle->pos - line->posS;
	Vector2 lineVector = line->posE - line->posS;

	lineVector = lineVector.Vec2Normalize();

	float distanceSLtoC = 
		distanceS.x * lineVector.y 
		- lineVector.x  * distanceS.y;

	if (fabs(distanceSLtoC)	< circle->r) {
		isHit_ = true;
	}
	else {
		isHit_ = false;
	}
}