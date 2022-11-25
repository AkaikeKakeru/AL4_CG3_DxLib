#pragma once
#include "Vector2.h"

class Line{
public://基本の関数
	//初期化
	void Initialize();
	//更新
	void Update();
	//描画
	void Draw();

public://ゲッター
	Vector2 GetStartPos() const { return startPos_; }
	Vector2 GetEndPos() const { return endPos_; }

private://メンバ変数
	//スタート座標
	Vector2 startPos_;
	//エンド座標
	Vector2 endPos_;
	//色
	unsigned int color_ = 0;
};