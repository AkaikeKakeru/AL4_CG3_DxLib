#include "Circle.h"
#include "DxLib.h"

//初期化
void Circle::Initialize(){
	pos_ = { 600, 200 };
	r_ = 40;
	color_ = GetColor(180, 180, 50);
}

//更新
void Circle::Update(bool isHit){
	//自動移動
	pos_.x -= 4;
	//自動移動
	pos_.y += 1;

	//衝突してるなら赤色に
	if (isHit) {
		color_ = GetColor(180, 50, 50);
	}
	//してないなら黄色に
	else {
		color_ = GetColor(180, 180, 50);
	}
}

//描画
void Circle::Draw(){
	DrawCircle(pos_.x, pos_.y, r_, color_);
}