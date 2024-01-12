#include <windows.h>

int main()
{

  HWND hwndButton = (HWND)0x00020F24;

  BOOL result = EnableWindow(hwndButton, TRUE);

  if (result)
  {
    MessageBox(NULL, L"버튼이 활성화되었습니다.", L"성공", MB_OK | MB_ICONINFORMATION);
  }
  else
  {
    MessageBox(NULL, L"버튼을 활성화하는데 실패했습니다.", L"실패", MB_OK | MB_ICONERROR);
  }

  return 0;
}