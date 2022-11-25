#include "Line.h"
#include "DxLib.h"

void Line::Initialize(){
	xS = 200;
	xE = 500;
	yS = 200;
	yE = 500;
	color = GetColor(50, 180, 180);
}

void Line::Update(){
}

void Line::Draw(){
	DrawLine(xS, yS, xE, yE, color);
}