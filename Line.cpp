#include "Line.h"
#include "DxLib.h"

//������
void Line::Initialize(){
	endPos_ = { 200,100 };
	startPos_ = { 500,400 };
	color_ = GetColor(50, 180, 180);
}

//�X�V
void Line::Update(){
	//�����I�ɂ͓��ɉ��������ĂȂ��B�u��
}

//�`��
void Line::Draw(){
	DrawLine(startPos_.x,startPos_.y, endPos_.x,endPos_.y, color_);
}