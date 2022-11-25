#include "Circle.h"
#include "DxLib.h"

//������
void Circle::Initialize(){
	pos_ = { 600, 200 };
	r_ = 40;
	color_ = GetColor(180, 180, 50);
}

//�X�V
void Circle::Update(bool isHit){
	//�����ړ�
	pos_.x -= 4;
	//�����ړ�
	pos_.y += 1;

	//�Փ˂��Ă�Ȃ�ԐF��
	if (isHit) {
		color_ = GetColor(180, 50, 50);
	}
	//���ĂȂ��Ȃ物�F��
	else {
		color_ = GetColor(180, 180, 50);
	}
}

//�`��
void Circle::Draw(){
	DrawCircle(pos_.x, pos_.y, r_, color_);
}