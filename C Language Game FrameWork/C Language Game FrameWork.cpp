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
        Clear();

        if (GetAsyncKeyState(VK_UP))
        { 
            if (--y < 29) y = 29;      
        }
        if (GetAsyncKeyState(VK_DOWN)) 
        { 
            if (++y > 30) y = 30;
        }      

        if (GetAsyncKeyState(VK_SPACE))
        {
            Sleep(500);

            if (y == 29) Count += 1;        
            if (y == 30) Count += 2;         
        }

        if (Count == 0) Road_Text("Start.txt");    
        else if (Count == 1) Road_Text("City.txt");
        else if (Count == 2) return;
        else if (Count == 3) Road_Text("Screen.txt");
    
    }
}

int main()
{
    Size(100, 50);  
    PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP); //루프 재생
   
    Update();

}

