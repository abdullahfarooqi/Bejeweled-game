#include <windows.h>



void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void myLine(int x1, int y1, int x2, int y2,int color) //use three 3 integers if you want colored lines.
{
	HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);

    //change the color by changing the values in RGB (from 0-255) to get shades of gray. For other colors use 3 integers for colors.
	HPEN pen =CreatePen(PS_SOLID,2,RGB(color,color,color)); //2 is the width of the pen
    SelectObject(device_context,pen);
	MoveToEx(device_context,x1,y1,NULL);
    LineTo(device_context,x2, y2);
	ReleaseDC(console_handle, device_context);  
	DeleteObject(pen);
	
}
void myCLine(int x1, int y1, int x2, int y2, int r,int g,int b ) //use three 3 integers if you want colored lines.
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255) to get shades of gray. For other colors use 3 integers for colors.
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(r, g, b)); //2 is the width of the pen
	SelectObject(device_context, pen);
	MoveToEx(device_context, x1, y1, NULL);
	LineTo(device_context, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);

}



// This function checks if any of the 4 cursor keys are pressed. 
// If any cursor key is pressed, then the function returns true, and whichKey identifies which of the 4 cursor keys is pressed.
// whichkey is assigned following values if any cursor key is pressed. 1 for left, 2 for up, 3 for right and 4 for left.
bool isCursorKeyPressed(int& whickKey)   //whichKey passed as reference.... 
{
	char key;
	key = GetAsyncKeyState(37);
	if (key == 1)
	{
		whickKey = 1;		// 1 if left key is pressed 
		return true;
	}
	key = GetAsyncKeyState(38);
	if (key == 1)
	{

		whickKey = 2;		// 2 if up key is pressed
		return true;
	}
	
	key = GetAsyncKeyState(39);
	if (key == 1)
	{

		whickKey = 3; // 3 if right key is pressed
		return true;
	}
	key = GetAsyncKeyState(40);
	if (key == 1)
	{

		whickKey = 4;   // 4 if down key is pressed
		return true;
	}
	key = GetAsyncKeyState(13);
	if (key == 1)
	{
		whickKey = 5;// 5 if return is pressed
		return true;
	}
	key = GetAsyncKeyState(83);
	if (key == 1)
	{
		whickKey = 6;// 6 if S is pressed
		return true;
	}
	key = GetAsyncKeyState(76);
	if (key == 1)
	{
		whickKey = 7;// 7 if L is pressed
		return true;
	}
	return false;
	
}

void myRect(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB)); //Fill color is passed as parameter to the function!!!

	SelectObject(device_context, brush);

	Rectangle(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}
void myEllipse(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB));  //Fill color is black
	SelectObject(device_context, brush);
	Ellipse(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);


}
void myRect1(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 0));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB)); //Fill color is passed as parameter to the function!!!

	SelectObject(device_context, brush);

	Rectangle(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}
void myRect2(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB)); //Fill color is passed as parameter to the function!!!

	SelectObject(device_context, brush);

	Rectangle(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}
void myEllipse1(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(56, 178, 230));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB));  //Fill color is black
	SelectObject(device_context, brush);
	Ellipse(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);


}
void myEllipse2(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB)
{
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 0));
	SelectObject(device_context, pen);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB));  //Fill color is black
	SelectObject(device_context, brush);
	Ellipse(device_context, x1, y1, x2, y2);
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);


}
void triangle(int x, int y, int R, int G, int B, int FR, int FG, int FB) {


	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
	SelectObject(device_context, pen);

	MoveToEx(device_context, 19 + x, 1 + y, NULL);
	LineTo(device_context, 30 + x, 28 + y);
	LineTo(device_context, 7 + x, 28 + y);
	LineTo(device_context, 19 + x, 1 + y);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB)); //Fill color is passed as parameter to the function!!!

	SelectObject(device_context, brush);

	FloodFill(device_context, x + 25, y + 20, RGB(R, G, B));
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}

void penta(int x, int y, int R, int G, int B, int FR, int FG, int FB) {


	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
	SelectObject(device_context, pen);

	MoveToEx(device_context, 16 + x, 1 + y, NULL);
	LineTo(device_context, 29 + x, 11 + y);
	LineTo(device_context, 25 + x, 27 + y);
	LineTo(device_context, 8 + x, 27 + y);
	LineTo(device_context, 4 + x, 11 + y);
	LineTo(device_context, 16 + x, 1 + y);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB)); //Fill color is passed as parameter to the function!!!

	SelectObject(device_context, brush);

	FloodFill(device_context, x + 25, y + 20, RGB(R, G, B));
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}
void diamond(int x, int y, int R, int G, int B, int FR, int FG, int FB) {


	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
	SelectObject(device_context, pen);

	MoveToEx(device_context, 19 + x, 2 + y, NULL);
	LineTo(device_context, 34 + x, 17 + y);
	LineTo(device_context, 19 + x, 32 + y);
	LineTo(device_context, 5 + x, 17 + y);
	LineTo(device_context, 19 + x, 2 + y);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB)); //Fill color is passed as parameter to the function!!!

	SelectObject(device_context, brush);

	FloodFill(device_context, x + 25, y + 20, RGB(R, G, B));
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}
void cube(int x, int y, int R, int G, int B, int FR, int FG, int FB) {


	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	//change the color by changing the values in RGB (from 0-255)
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
	SelectObject(device_context, pen);

	MoveToEx(device_context, 10 + x, 17 + y, NULL);
	LineTo(device_context, 10 + x, 37 + y);
	LineTo(device_context, 33 + x, 37 + y);
	LineTo(device_context, 38 + x, 33 + y);
	LineTo(device_context, 38 + x, 12 + y);
	LineTo(device_context, 15 + x, 12 + y);
	LineTo(device_context, 10 + x, 17 + y);
	LineTo(device_context, 33 + x, 17 + y);
	LineTo(device_context, 33 + x, 37 + y);
	HBRUSH brush = ::CreateSolidBrush(RGB(FR, FG, FB)); //Fill color is passed as parameter to the function!!!

	SelectObject(device_context, brush);

	FloodFill(device_context, x + 25, y + 20, RGB(R, G, B));
	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	DeleteObject(brush);
}
void ellipse(int x, int y) {
	myEllipse(10 + x, 10 + y, 40 + x, 40 + y, 150, 189, 165, 254, 0, 0);
}
void fieryellipse(int x, int y) {
	myEllipse1(10 + x, 10 + y, 40 + x, 40 + y, 150, 189, 165, 230, 45, 46);
}
void rect(int x, int y) {
	myRect(10 + x, 10 + y, 40 + x, 40 + y, 0, 0, 0, 0, 254, 0);
}
void fieryrect(int x, int y) {
	myRect1(10 + x, 10 + y, 40 + x, 40 + y, 0, 0, 0, 45, 254, 146);
}
void destrect(int x, int y) {
	myRect2(10 + x, 10 + y, 40 + x, 40 + y, 0, 0, 0, 45, 254, 146);
}
void cube1(int x, int y) {
	cube(x, y, 255, 0, 127, 153, 51, 255);
}
void destellipse(int x, int y) {
	myEllipse2(10 + x, 10 + y, 40 + x, 40 + y, 0, 56, 24, 254, 0, 0);
}



