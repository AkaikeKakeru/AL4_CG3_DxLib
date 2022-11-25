#pragma once
#include "Vector2.h"

class Circle{
public://基本の関数
	//初期化
	void Initialize();
	//更新
	void Update(bool isHit);
	//描画
	void Draw();

public://ゲッター
	Vector2 GetPos() const { return pos_; }
	int GetR() const { return r_; }

private://メンバ変数
	//中心座標
	Vector2 pos_;
	//半径
	int r_ = 0;
	//色
	unsigned int color_ = 0;
};