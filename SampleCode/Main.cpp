#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(true);
	SetWindowText(L"2016214_ãgïêèüäÛ");
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0)
	{
		ClearDrawScreen();
		ScreenFlip();
	}
	DxLib_End();
	return 0;
}