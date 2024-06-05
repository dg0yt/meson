#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main()
{
    SYSTEMTIME time;
    GetLocalTime(&time);  // Desktop: Kernel32.lib
    return 0;
}
