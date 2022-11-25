#include "Collider.h"
#include <cmath>
//������
void Collider::Initialize(){
	isHit_ = false;
}

//�X�V
void Collider::Update(Circle* circle,Line* line){
	//���̃X�^�[�g�ʒu���~�̒��S
	Vector2 vecStoC = circle->GetPos() - line->GetStartPos();
	
	//���̃X�^�[�g�ʒu�����̃G���h�ʒu
	Vector2 lineVector = line->GetEndPos() - line->GetStartPos();
	//�P�ʉ�
	lineVector = lineVector.Vec2Normalize();

	//�~�̒��S�ƁA���Ƃ́A�ŒZ����(�����̒����݂�����)
	float distanceStoC = vecStoC.x * lineVector.y - lineVector.x  * vecStoC.y;

	//�~�̔��a�����������Ȃ�A�Փ˂��Ă���Ɣ��f
	if (fabs(distanceStoC)	< circle->GetR()) {
		isHit_ = true;
	}
	//�~�̔��a�����傫���Ȃ�A�Փ˂��Ă��Ȃ�
	else {
		isHit_ = false;
	}
}