#pragma once
#include "Vector2.h"

class Circle{
public://��{�̊֐�
	//������
	void Initialize();
	//�X�V
	void Update(bool isHit);
	//�`��
	void Draw();

public://�Q�b�^�[
	Vector2 GetPos() const { return pos_; }
	int GetR() const { return r_; }

private://�����o�ϐ�
	//���S���W
	Vector2 pos_;
	//���a
	int r_ = 0;
	//�F
	unsigned int color_ = 0;
};