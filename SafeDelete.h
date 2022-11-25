#pragma once

template<typename T>
void SafeDelete(T& p) {
	delete p;
	p = nullptr;
}