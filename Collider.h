#pragma once
#include "Circle.h"
#include "Line.h"
#include "Vector2.h"

class Collider {
public://��{�̊֐�
	//������
	void Initialize();
	//�X�V
	void Update(Circle* circle,Line* line);

public://�Q�b�^�[
	//�Փ˔�����擾�ł���
	bool GetIsHit() const { return isHit_; }

private://�����o�ϐ�
	//�Փ˔���
	bool isHit_;
};