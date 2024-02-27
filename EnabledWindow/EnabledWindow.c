#include <stdio.h>
#include <windows.h>

int main()
{
    while (1) // 무한 루프
    {
        HWND hwndInput;
        char buffer[256];
        unsigned int handleValue;

        // 사용자로부터 16진수 형식의 hwndInput 값을 입력 받음
        printf("활성화할 윈도우의 핸들 값을 16진수로 입력하세요 (종료하려면 0 입력): ");
        scanf_s("%x", &handleValue);

        if (handleValue == 0) // 사용자가 0을 입력하면 종료
            break;

        hwndInput = (HWND)handleValue;

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

        // 입력 버퍼를 비움
        while (getchar() != '\n')
            ;

        printf("\n"); // 개행
    }

    return 0;
}
