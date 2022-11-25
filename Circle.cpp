#include "Circle.h"
#include "DxLib.h"

void Circle::Initialize(){
	x = 500;
	y = 300;
	r = 40;
	color = GetColor(180, 180, 50);
}

void Circle::Update(){
	x--;
}

void Circle::Draw(){
	DrawCircle(x, y, r, color);
}