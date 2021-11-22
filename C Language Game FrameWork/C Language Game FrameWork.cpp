#define _CRT_SECURE_NO_WARNINGS
#include "Function.h"
#include <iostream>

static int Count = 0;

void Update() // 프레임 마다 업데이트를 해야 하는 함수
{
    int y = 30;

    Road_Text("Screen.txt");

    Sleep(2000);

    while (1)
    {              
        gotoxy(54, y);
        printf("☞");

        if (GetAsyncKeyState(VK_UP))
        { 
            if (--y < 29) y = 29;         
        }
        if (GetAsyncKeyState(VK_DOWN)) 
        { 
            if (++y > 30) y = 30;
        }
 
        switch (Count)
        {
           case 0 :     
               Clear();
               Road_Text("Start.txt");     
        }
    }

    gotoxy(0, 5);
    Road_Text("Start Contents.txt");
}

int main()
{
    Size(100, 50);
   
    PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP); //루프 재생
   
    Update();

}

