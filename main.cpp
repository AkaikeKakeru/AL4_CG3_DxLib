#include "DxLib.h"
#include "SafeDelete.h"
//#include "DxBasis.h"
//#include "Scene.h"
#include "Circle.h"
#include "Line.h"
#include "Collider.h"
#include "Vector2.h"
#include <cmath>

// ウィンドウのタイトルに表示する文字列
const char TITLE[] = "LE2B_01_アカイケ_カケル: 円と線の衝突判定";

// ウィンドウ横幅
const int WIN_WIDTH = 800;

// ウィンドウ縦幅
const int WIN_HEIGHT = 600;

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine,
                   _In_ int nCmdShow) {
	// ウィンドウモードに設定
	ChangeWindowMode(TRUE);

	// ウィンドウサイズを手動では変更させず、
	// かつウィンドウサイズに合わせて拡大できないようにする
	SetWindowSizeChangeEnableFlag(FALSE, FALSE);

	//タイトルを変更
	SetMainWindowText(TITLE);

	// 画面サイズの最大サイズ、カラービット数を設定(モニターの解像度に合わせる)
	SetGraphMode(WIN_WIDTH, WIN_HEIGHT, 32);

	// 画面サイズを設定(解像度との比率で設定)
	SetWindowSizeExtendRate(1.0);

	// 画面の背景色を設定する
	SetBackgroundColor(0x00, 0x00, 0x00);

	// DXlibの初期化
	if (DxLib_Init() == -1) { return -1; }

	// (ダブルバッファ)描画先グラフィック領域は裏面を指定
	SetDrawScreen(DX_SCREEN_BACK);


	// 画像などのリソースデータの変数宣言と読み込み

	// ゲームループで使う変数の宣言
	//Scene* scene = new Scene;
	//scene->Initialize();

	Circle* circle = new Circle;
	circle->Initialize();

	Line* line = new Line;
	line->Initialize();

	Collider* collider = new Collider;
	collider->Initialize();

	Vector2 textPos = { 200,550 };
	unsigned textColor = GetColor(200, 200, 200);

	char colText[] = {"当たってます"};
	char notColText[] = {"当たってません"};
	TCHAR* text = nullptr;

	// 最新のキーボード情報用
	char keys[256] = {0};

	// 1ループ(フレーム)前のキーボード情報
	char oldkeys[256] = {0};

	// ゲームループ
	while (true) {
		// 最新のキーボード情報だったものは1フレーム前のキーボード情報として保存
		// 最新のキーボード情報を取得
		GetHitKeyStateAll(keys);
		// 画面クリア
		ClearDrawScreen();

		//---------  ここからプログラムを記述  ----------//

		// 更新処理
		//scene->Update();

		collider->Update(circle,line);

		if (collider->GetIsHit()) {
			text = colText;
		}
		else {
			text = notColText;
		}

		circle->Update(collider->GetIsHit());
		line->Update();

		// 描画処理
		//scene->Draw();

		circle->Draw();
		line->Draw();

		DrawFormatString(
			textPos.x, textPos.y,
			textColor,
			text);
		//---------  ここまでにプログラムを記述  ---------//

		// (ダブルバッファ)裏面
		ScreenFlip();

		// 20ミリ秒待機(疑似60FPS)
		WaitTimer(20);

		// Windowsシステムからくる情報を処理する
		if (ProcessMessage() == -1) {
			break;
		}

		// ESCキーが押されたらループから抜ける
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}
	}

	//解放
	//SafeDelete(scene);
	SafeDelete(collider);
	SafeDelete(circle);
	SafeDelete(line);

	// Dxライブラリ終了処理
	DxLib_End();

	// 正常終了
	return 0;
}
