#include <windows.h>
/*
#include <windows.h>
WINDOWS.H is a master include file that includes other Windows header files, some of which also include other header files. The most important and most basic of these header files are:
This document was created by an unregistered ChmMagic, please go to http://www.bisenter.com to register it. Thanks .
WINDEF.H   Basic type definitions.
WINNT.H   Type definitions for Unicode support.
WINBASE.H   Kernel functions.
WINUSER.H  User interface functions.
WINGDI.H  Graphics device interface functions.
*/

/*-------------------------------------------------------------   
First WinApp, only displays "Hello, World!!" in a message box, in differents ways.
(c) Victor Velepucha, 2019
--------------------------------------------------------------*/

//The WINAPI identifier is defined in WINDEF.H with the statement :
//#define WINAPI __stdcall

//The first parameter to WinMain is something called an "instance handle." In Windows programming, a handle is simply a number that an application uses to identify something.In this case, the handle uniquely identifies the program.It is required as an argument to some other Windows function calls.
//The second parameter to WinMain is always NULL (defined as 0).
//The third parameter to WinMain is the command line used to run the program

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) 
{
    //MessageBox(NULL, TEXT("Hello, World!!"), TEXT("HelloMsg"), 0);
    //MessageBox(NULL, L"Hello, World!!", L"HelloMsg", 0);
    /*MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_OK);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_OKCANCEL);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_ABORTRETRYIGNORE);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_YESNOCANCEL);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_YESNO);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_RETRYCANCEL);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_CANCELTRYCONTINUE);*/
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_OK | MB_ICONERROR);//Same of MB_ICONHAND or MB_ICONSTOP
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_OK | MB_ICONQUESTION);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_OK | MB_ICONWARNING);//same of MB_ICONEXCLAMATION
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_OK | MB_ICONINFORMATION);//Same of MB_ICONASTERISK
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_DEFBUTTON1);
    /*MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_DEFBUTTON2);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_DEFBUTTON3);
    MessageBox(NULL, L"Hello, World!!", L"HelloMsg", MB_DEFBUTTON4);*/
    return 0;
}

/*
The fourth argument to MessageBox can be a combination of constants 
beginning with the prefix MB_ that are defined in WINUSER.H.
#define MB_OK                       0x00000000L 
#define MB_OKCANCEL                 0x00000001L 
#define MB_ABORTRETRYIGNORE         0x00000002L 
#define MB_YESNOCANCEL              0x00000003L 
#define MB_YESNO                    0x00000004L 
#define MB_RETRYCANCEL              0x00000005L
*/

/*
INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    PSTR lpCmdLine, INT nCmdShow)
{

}

int CALLBACK WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR     lpCmdLine,
    _In_ int       nCmdShow
);

LRESULT CALLBACK WndProc(
    _In_ HWND   hWnd,
    _In_ UINT   message,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam
);


int WINAPI WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    WNDCLASSEX wcex;
    
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, IDI_APPLICATION);

    if (!RegisterClassEx(&wcex))
    {
        MessageBox(NULL,
            _T("Call to RegisterClassEx failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

        return 1;
    }

    // Store instance handle in our global variable
    hInst = hInstance;

    // The parameters to CreateWindow explained:
    // szWindowClass: the name of the application
    // szTitle: the text that appears in the title bar
    // WS_OVERLAPPEDWINDOW: the type of window to create
    // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
    // 500, 100: initial size (width, length)
    // NULL: the parent of this window
    // NULL: this application dows not have a menu bar
    // hInstance: the first parameter from WinMain
    // NULL: not used in this application
    HWND hWnd = CreateWindow(
        szWindowClass,
        szTitle,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT,
        500, 100,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (!hWnd)
    {
        MessageBox(NULL,
            _T("Call to CreateWindow failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

        return 1;
    }

    // The parameters to ShowWindow explained:
    // hWnd: the value returned from CreateWindow
    // nCmdShow: the fourth parameter from WinMain
    ShowWindow(hWnd,
        nCmdShow);
    UpdateWindow(hWnd);
    
    // Main message loop:
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    
    return (int)msg.wParam;
}

*/