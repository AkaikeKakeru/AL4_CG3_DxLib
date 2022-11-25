#include "Line.h"
#include "DxLib.h"

//初期化
void Line::Initialize(){
	endPos_ = { 200,100 };
	startPos_ = { 500,400 };
	color_ = GetColor(50, 180, 180);
}

//更新
void Line::Update(){
	//内部的には特に何もさせてない。置物
}

//描画
void Line::Draw(){
	DrawLine(startPos_.x,startPos_.y, endPos_.x,endPos_.y, color_);
}