#pragma once
#include "Circle.h"
#include "Line.h"
#include "Vector2.h"

class Collider {
public://基本の関数
	//初期化
	void Initialize();
	//更新
	void Update(Circle* circle,Line* line);

public://ゲッター
	//衝突判定を取得できる
	bool GetIsHit() const { return isHit_; }

private://メンバ変数
	//衝突判定
	bool isHit_;
};