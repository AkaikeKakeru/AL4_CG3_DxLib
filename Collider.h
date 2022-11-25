#pragma once

class Collider {
public:
	void Initialize();
	void Update(Circle* circle,Line* line);

	bool GetIsHit() const { return isHit_; }
private:
	bool isHit_ = false;
};