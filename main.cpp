#include <iostream>
#include <string>
#include "./getch.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void text(string str)
{
	cout << str;
}

void newline()
{
	cout << "\n";
}

void longspace()
{
	cout << "\t";
}

void flushprint()
{
	cout << std::endl;
}

void pause(string note) // it requires getch.h to use it
{
    text(note);
    flushprint();
	char input = getch(); // conio.h was vanished from c++ community, so using Linas Vockensohn's work from his github, called getch.h
}

int main(int argc, char** argv) {
	string str = "Hello ";
	string str2 = "total that was said are ";
	int a = 1;
	int b = 0;
	for (int i = 0;i < 10;i++)
	{
		str = str + "Hello ";
		a++;
		b = b + a;
		text(str);
		flushprint();
	}
	cout << "hellos " << str2 << b << " of it." << std::endl;
	pause("Press any key to continue...");
	newline();
	a = 1;
	b = 0;
	str = "OOOOO ";
	for (int i = 0;i < 10;i++)
	{
		str = str + "OOOOO ";
		a = a + 5;
		b = b + a;
		text(str);
		flushprint();
	}
	cout << "O " << str2 << b << " of it." << std::endl;
	pause("Press any key to continue...");
	newline();
	a = 1;
	b = 0;
	str = "#";
	for (int i = 0;i < 10;i++)
	{
		str = str + "##";
		a = a + 2;
		b = b + a;
		text(str);
		flushprint();
	}
	cout << "Parts of this art hashtags " << str2 << b << " of it." << std::endl;
	pause("Now what's next??? Let you press any key to continue...");
	longspace();
	text("I'm learning C++");
	newline();
	longspace();
	text("to turn into a real programmer!");
	newline();
	text("So the end. Hello, i'm Sances84 the programmer who created this program, goodbye!");
	flushprint();
	pause("Now press any key to close this program...");
	return 0;
}
