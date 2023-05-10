#pragma once
#include<Windows.h>
#include<cstdint>
class WinApp
{
public:
	WinApp();
	WNDCLASS wc{};

	HWND hwnd;
	// クライアント領域のサイズ
	const int32_t kClientWidth = 1280;
	const int32_t kClientHeight = 720;

};

