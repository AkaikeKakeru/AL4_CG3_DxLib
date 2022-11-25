#pragma once

//解放後にnullptrを入れる
template<typename T>
void SafeDelete(T& p) {
	delete p;
	p = nullptr;
}