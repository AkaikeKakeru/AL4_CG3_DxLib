#pragma once

//‰ð•úŒã‚Énullptr‚ð“ü‚ê‚é
template<typename T>
void SafeDelete(T& p) {
	delete p;
	p = nullptr;
}