#include <iostream>
/*Apparently, a sleep() function is not provided standard,
and requires different libraries depending on the OS, hence the if statement.*/
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#define OLC_PGE_APPLICATION
#include "./PGE/olcPixelGameEngine.h"
#include <assert.h>

class Window : public olc::PixelGameEngine{
    public:
    Window(){
        sAppName = "Just screwing around";
    }

    bool OnUserCreate() override{
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override{
        DrawLine(10, 10, ScreenWidth() - 10, 10, olc::RED);
		DrawLine(10, 10, 10, ScreenHeight() - 10, olc::RED);
		DrawLine(ScreenWidth() - 10, 10, ScreenWidth() - 10, ScreenHeight() - 10, olc::RED);
        DrawLine(ScreenWidth() - 10, ScreenHeight() - 10, ScreenWidth() - 10, ScreenHeight() - 10, olc::RED);
        return true;
    }

};

int main(){
    Window win;
    if (win.Construct(512,256, 2, 2))
        win.Start();
    return 0;
}
