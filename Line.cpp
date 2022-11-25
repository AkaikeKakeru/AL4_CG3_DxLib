#include "Line.h"
#include "DxLib.h"

void Line::Initialize(){
	posE = { 200,100 };
	posS = { 500,400 };
	color = GetColor(50, 180, 180);
}

void Line::Update(){
}

void Line::Draw(){
	DrawLine(posS.x,posS.y, posE.x,posE.y, color);
}