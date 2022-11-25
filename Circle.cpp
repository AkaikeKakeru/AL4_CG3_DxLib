#include "Circle.h"
#include "DxLib.h"

void Circle::Initialize(){
	pos = { 600, 200 };
	r = 40;
	color = GetColor(180, 180, 50);
}

void Circle::Update(bool isHit){
	pos.x -= 4;
	pos.y += 1;

	if (isHit) {
		color = GetColor(180, 50, 50);
	}
	else {
		color = GetColor(180, 180, 50);
	}
}

void Circle::Draw(){
	DrawCircle(pos.x, pos.y, r, color);
}