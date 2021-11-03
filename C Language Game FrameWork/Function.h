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

void Road_Text(const char * text) // 텍스트 파일을 불러오는 함수
{
	FILE* file = fopen(text,"r"); // 외부에 있는 텍스트 파일을 r(읽기) 모드로 열기
	char buffer[1000] = { 0, };

	// buffer = char 배열
	// 1 = 크기를 가지는 배열을 가리키는 포인터 
	// 1000 = 읽어들일 원소의 크기로 단위는 바이트이며, size가 4 이면 하나의 원소의 크기는 4 바이트이다.
	// file = 데이터를 입력받을 스트림의 FILE 객체를 가리키는 포인터

	fread(buffer, 1, 1000, file); // 전체 읽기
	printf("%s", buffer);

	fclose(file); // 파일 닫기
}

void Color(int index) // 텍스트 색상을 변경해주는 함수
{
	// index = 색상표 번호를 입력하면 됩니다.
	// 0 = 검정, 1 = 파랑, 2 = 초록, 3 = 은색, 4 = 빨강, 5 = 자주, 6 = 노랑, 7 = 횐색
	// 8 = 회색, 9 = 밝은 파랑, 10 = 밝은 초록, 11 = 밝은 옥색, 12 = 밝은 빨강, 13 = 밝은 자주, 14 = 밝은 노랑, 15 = 밝은 흰색
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), index);
}