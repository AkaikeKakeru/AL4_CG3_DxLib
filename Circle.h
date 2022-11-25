#pragma once

class Circle{
public:
	void Initialize();
	void Update();
	void Draw();
private:
	int x;
	int y;
	int r;
	unsigned int color;
};