#include <windows.h>

int main()
{
    HWND hwndInput;
    char buffer[256];

    // 사용자로부터 hwndInput 값을 입력 받음
    printf("활성화할 윈도우의 핸들 값을 입력하세요: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%p", &hwndInput);

    // 입력된 핸들 값으로 버튼을 활성화
    BOOL result = EnableWindow(hwndInput, TRUE);

    if (result)
    {
        MessageBox(NULL, TEXT("버튼이 활성화되었습니다."), TEXT("성공"), MB_OK | MB_ICONINFORMATION);
    }
    else
    {
        MessageBox(NULL, TEXT("버튼을 활성화하는데 실패했습니다."), TEXT("실패"), MB_OK | MB_ICONERROR);
    }

    return 0;
}