#pragma once

//������nullptr������
template<typename T>
void SafeDelete(T& p) {
	delete p;
	p = nullptr;
}