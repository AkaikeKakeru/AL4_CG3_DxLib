#pragma once
#include "Vector2.h"

class Line{
public://��{�̊֐�
	//������
	void Initialize();
	//�X�V
	void Update();
	//�`��
	void Draw();

public://�Q�b�^�[
	Vector2 GetStartPos() const { return startPos_; }
	Vector2 GetEndPos() const { return endPos_; }

private://�����o�ϐ�
	//�X�^�[�g���W
	Vector2 startPos_;
	//�G���h���W
	Vector2 endPos_;
	//�F
	unsigned int color_ = 0;
};