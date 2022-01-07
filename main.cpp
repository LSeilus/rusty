#include <iostream>
/*Apparently, a sleep() function is not provided standard,
and requires different libraries depending on the OS, hence the if statement.*/
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    std::cout << "Devon is cute!";
    sleep(100);
    std::cout << "Super cute, even!";

    return;
}
