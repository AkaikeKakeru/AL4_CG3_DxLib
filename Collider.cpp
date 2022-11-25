#include "Collider.h"
#include <cmath>
//初期化
void Collider::Initialize(){
	isHit_ = false;
}

//更新
void Collider::Update(Circle* circle,Line* line){
	//線のスタート位置→円の中心
	Vector2 vecStoC = circle->GetPos() - line->GetStartPos();
	
	//線のスタート位置→線のエンド位置
	Vector2 lineVector = line->GetEndPos() - line->GetStartPos();
	//単位化
	lineVector = lineVector.Vec2Normalize();

	//円の中心と、線との、最短距離(垂線の長さみたいな)
	float distanceStoC = vecStoC.x * lineVector.y - lineVector.x  * vecStoC.y;

	//円の半径よりも小さいなら、衝突していると判断
	if (fabs(distanceStoC)	< circle->GetR()) {
		isHit_ = true;
	}
	//円の半径よりも大きいなら、衝突していない
	else {
		isHit_ = false;
	}
}