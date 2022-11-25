#pragma once

class Line{
public:
	void Initialize();
	void Update();
	void Draw();
private:
	int xS;
	int xE;
	int yS;
	int yE;

	unsigned int color;
};