#include "Line.h"
#include "DxLib.h"

void Line::Initialize(){
	posS = { 200,200 };
	posE = { 500,500 };
	color = GetColor(50, 180, 180);
}

void Line::Update(){
}

void Line::Draw(){
	DrawLine(posS.x,posS.y, posE.x,posE.y, color);
}