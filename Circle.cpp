#include "Circle.h"
#include "DxLib.h"

void Circle::Initialize(){
	pos = { 500, 300 };
	r = 40;
	color = GetColor(180, 180, 50);
}

void Circle::Update(){
	pos.x--;
}

void Circle::Draw(){
	DrawCircle(pos.x, pos.y, r, color);
}