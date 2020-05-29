//https://docs.microsoft.com/en-us/cpp/cpp/string-and-character-literals-cpp?view=vs-2019

#include <windows.h>
#include <tchar.h>
#include <string>
#include <iostream>

using namespace std;

INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    PSTR lpCmdLine, INT nCmdShow)
{
//int main()
//{

/*
Integer types:
Data type 	Size 	    Signed?
BYTE 	    8 bits 	    Unsigned
DWORD 	    32 bits 	Unsigned
INT32 	    32 bits 	Signed
INT64 	    64 bits 	Signed
LONG 	    32 bits 	Signed
LONGLONG 	64 bits 	Signed
UINT32 	    32 bits 	Unsigned
UINT64 	    64 bits 	Unsigned
ULONG 	    32 bits 	Unsigned
ULONGLONG 	64 bits 	Unsigned
WORD 	    16 bits 	Unsigned

Pointer Precision Types

DWORD_PTR
INT_PTR
LONG_PTR
ULONG_PTR
UINT_PTR


*/

    wchar_t a = L'a';
    //wchar_t *str = L"hello";
    //you can leave it empty
    char a0a = 'A';
    CHAR a1b = 'A'; // same of char
    TCHAR a1c = 'A';

    const char* a2a = PSTR("Also Store this string in flash");
    PSTR a2b = PSTR("Also Store this string in flash");// same of char*

    const char* a3a = PCSTR("Also Store this string in flash");// same of const char*
    PCSTR a3b = PCSTR("Also Store this string in flash");// same of const char*
    LPCSTR a3c = PCSTR("Also Store this string in flash");// same of const char*
    //char* b3 = "1234";

    wchar_t* a4a = new wchar_t[30];//same of wchar_t*
    PWSTR a4b = new wchar_t[30];//same of wchar_t*
    LPCWSTR a4c = L"TestWindow";//same of wchar_t*
    LPCWSTR a4d = TEXT("x");//same of wchar_t*, TEXT = L

    PCWSTR a5a = L"TestWindow"; // same of      const wchar_t*
    LPCWSTR a5b = L"TestWindow"; // same of     const wchar_t*


    // Character literals
    auto c0 = 'A'; // char
    auto c1 = u8'A'; // char
    auto c2 = L'A'; // wchar_t
    auto c3 = u'A'; // char16_t
    auto c4 = U'A'; // char32_t

    // Multicharacter literals
    auto m0 = 'abcd'; // int, value 0x61626364

    // String literals
    auto s0 = "hello"; // const char*
    auto s1 = u8"hello"; // const char*, encoded as UTF-8
    auto s2 = L"hello"; // const wchar_t*
    auto s3 = u"hello"; // const char16_t*, encoded as UTF-16
    auto s4 = U"hello"; // const char32_t*, encoded as UTF-32

    // Raw string literals containing unescaped \ and "
    auto R0 = R"("Hello \ world")"; // const char*
    auto R1 = u8R"("Hello \ world")"; // const char*, encoded as UTF-8
    auto R2 = LR"("Hello \ world")"; // const wchar_t*
    auto R3 = uR"("Hello \ world")"; // const char16_t*, encoded as UTF-16
    auto R4 = UR"("Hello \ world")"; // const char32_t*, encoded as UTF-32
/*
    // Combining string literals with standard s-suffix
    auto S0 = "hello"s; // std::string
    auto S1 = u8"hello"s; // std::string
    auto S2 = L"hello"s; // std::wstring
    auto S3 = u"hello"s; // std::u16string
    auto S4 = U"hello"s; // std::u32string

    // Combining raw string literals with standard s-suffix
    auto S5 = R"("Hello \ world")"s; // std::string from a raw const char*
    auto S6 = u8R"("Hello \ world")"s; // std::string from a raw const char*, encoded as UTF-8
    auto S7 = LR"("Hello \ world")"s; // std::wstring from a raw const wchar_t*
    auto S8 = uR"("Hello \ world")"s; // std::u16string from a raw const char16_t*, encoded as UTF-16
    auto S9 = UR"("Hello \ world")"s; // std::u32string from a raw const char32_t*, encoded as UTF-32
*/
    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char backslash = '\\';
    char nullChar = '\0';

    cout << "Newline character: " << newline << "ending" << endl; // Newline character:
                                                                  //  ending
    cout << "Tab character: " << tab << "ending" << endl; // Tab character : ending
    cout << "Backspace character: " << backspace << "ending" << endl; // Backspace character : ending
    cout << "Backslash character: " << backslash << "ending" << endl; // Backslash character : \ending
    cout << "Null character: " << nullChar << "ending" << endl; //Null character:  ending

    char c01 = 'abcd';    // C4305, C4309, truncates to 'd'
    wchar_t w0 = 'abcd';    // C4305, C4309, truncates to '\x6364'
    int i0 = 'abcd';    // 0x61626364
    char c1a = '\100';   // '@'
    char c2a = '\1000';  // C4305, C4309, truncates to '0'
    char c6 = '\x0050'; // 'P'
    char c7 = '\x0pqr'; // C4305, C4309, truncates to 'r'

    wchar_t w1 = L'\100';   // L'@'
    wchar_t w2 = L'\1000';  // C4066 L'@', 0 ignored
    wchar_t w3 = L'\009';   // C4066 L'\0', 9 ignored
    wchar_t w4 = L'\089';   // C4066 L'\0', 89 ignored
    wchar_t w5 = L'\qrs';   // C4129, C4066 L'q' escape, rs ignored
    wchar_t w6 = L'\x0050'; // L'P'
    wchar_t w7 = L'\x0pqr'; // C4066 L'\0', pqr ignored

    char u1 = 'A';          // 'A'
    char u2 = '\101';       // octal, 'A'
    char u3 = '\x41';       // hexadecimal, 'A'
    char u4 = '\u0041';     // \u UCN 'A'
    char u5 = '\U00000041'; // \U UCN 'A'

    const char* narrow = "abcd";

    // represents the string: yes\no
    const char* escaped = "yes\\no";

    //UTF-8 encoded strings
    const char* str1 = u8"Hello World";
    const char* str2 = u8"\U0001F607 is O:-)";

    const wchar_t* wide = L"zyxw";
    const wchar_t* newlinev = L"hello\ngoodbye";

    //char16_tand char32_t(C++11)
    auto s30 = u"hello"; // const char16_t*
    auto s40 = U"hello"; // const char32_t*

    // represents the string: An unescaped \ character
    const char* raw_narrow = R"(An unescaped \ character)";
    const wchar_t* raw_wide = LR"(An unescaped \ character)";
    const char* raw_utf8 = u8R"(An unescaped \ character)";
    const char16_t* raw_utf16 = uR"(An unescaped \ character)";
    const char32_t* raw_utf32 = UR"(An unescaped \ character)";
    const char* good_parens = R"xyz()")xyz";
    //const char* bad_parens = R"()")";  // error C2059

    // represents the string: hello
                            //goodbye
    const wchar_t* newline2 = LR"(hello
goodbye)";

    //#include <string>
//using namespace std::string_literals;
    string str1a{ "hello"s };
    string str2a{ u8"Hello World" };
    wstring str3a{ L"hello"s };
    u16string str4a{ u"hello"s };
    u32string str5a{ U"hello"s };

    u32string str6a{ UR"(She said "hello.")"s };

    const wchar_t* str7a = L"Hello!";
    const size_t byteSize = (wcslen(str7a) + 1) * sizeof(wchar_t);

    //const wchar_t* str8a = L"hello";
    //str8a[2] = L'a'; // run-time error: access violation

    //auto str9a = L"hello";
    //str9a[2] = L'a'; // C3892: you cannot assign to a variable that is const.
    
    //is identical to this declaration:
    char str10a[] = "12" "34";
    char str10b[] = "1234";
    char str10c[] = "12\
                    34";

    auto x1 = "hello" " " " world"; // OK
    //auto x2 = U"hello" " " L"world"; // C2308: disagree on prefix
    auto x3 = u8"hello" " "s u8"world"s; // OK, agree on prefixes and suffixes
    //auto x4 = u8"hello" " "s u8"world"z; // C3688, disagree on suffixes

    // ASCII smiling face
    const char* s1f = ":-)";

    // UTF-16 (on Windows) encoded WINKING FACE (U+1F609)
    const wchar_t* s2f = L"😉 = \U0001F609 is ;-)";

    // UTF-8  encoded SMILING FACE WITH HALO (U+1F607)
    const char* s3f = u8"😇 = \U0001F607 is O:-)";

    // UTF-16 encoded SMILING FACE WITH OPEN MOUTH (U+1F603)
    const char16_t* s4f = u"😃 = \U0001F603 is :-D";

    // UTF-32 encoded SMILING FACE WITH SUNGLASSES (U+1F60E)
    const char32_t* s5f = U"😎 = \U0001F60E is B-)";

    wchar_t* str11 = new wchar_t[30];
    //str11 = L"Hello!";
    lstrcpyW(str11, L"Hello!");

    return 0;
}