#pragma once
#include <stdio.h>
#include <windows.h>


void gotoxy(int x, int y) // x, y 좌표를 정의하는 함수
{
	COORD pos = { x,y }; // x, y 좌표 설정
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); // 좌표 위치 이동 
}

void Clear() // 화면을 지우는 함수
{
	system("cls");
}

void Cursor(bool show) // bool = true(커서 ON), bool = false(커서 OFF)
{
	// cursor_info.bVisible = 커서 노출 여부에 대한 변수
	// SetConsoleCursorInfo = 지정되어 있는 콘솔 스크린 버퍼에 대하여 커서의 형태를 설정하는 함수

	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	cursor_info.bVisible = show; 
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void Waiting(int Count) // 대기 상태를 만들어주는 함수
{
	// Sleep(1000) = 1000ms (1초) 동안 프로그램 대기
    // 100 = 0.1초, 10000 = 10초

	Sleep(Count); // 런타임(실행 중일 때) 프로그램을 일시적으로 멈춥니다.
}

void Size(int width, int Height) // 화면의 크기를 지정해주는 함수
{
	// sprintf_s = 출력하는 결과 값을 변수에 저장하는 함수이다.
	// command <- "mode con: cols=%d lines=%d"으로 command 에는 "mode con: cols=%d lines=%d 이라는 값이 저장된다."
	// cols=%d(가로), lines=%d(세로) 
	// width, Height 에 입력한 매개변수로 화면의 크기를 결정한다.
	// system 함수는 Windows CMD 명령문을 실행하는 함수로써 화면의 크기가 나타난다.

	char command[100]; // Window CMD 명령어를 담을 문자 배열입니다.
	sprintf_s(command, "mode con: cols=%d lines=%d", width, Height);
	system(command);
}