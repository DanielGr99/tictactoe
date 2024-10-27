#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int faktor1;
int faktor2;
int cross;
int circlepc;
int one;
int two;
int three;
int four;
int five;
int six;
int seven;
int eight;
int nine;
int full = 0;
unsigned long delayt = 50000000;
string place1 = " ";
string place2 = " ";
string place3 = " ";
string place4 = " ";
string place5 = " ";
string place6 = " ";
string place7 = " ";
string place8 = " ";
string place9 = " ";
string circle = "0";
string getrestart;

void game();
int createrandom();
void drawfield();
void setcircle();
void setcross();
void scanfield();
void delay();
void scanwin();
void restart();

void restart()
{
	getrestart = " ";
	cout << "Nochmal spielen? J/N" << endl;
	cin >> getrestart;
	if (getrestart == "J" || getrestart == "j")
	{
		place1 = " ";
		place2 = " ";
		place3 = " ";
		place4 = " ";
		place5 = " ";
		place6 = " ";
		place7 = " ";
		place8 = " ";
		place9 = " ";
		full = 0;
		game();
	}
	
}

void scanwin()
{
	if ((one == 0 && two == 0 && three == 0) || (four == 0 && five == 0 && six == 0) || (seven == 0 && eight == 0 && nine == 0) || (one == 0 && four == 0 && seven == 0) || (two == 0 && five == 0 && eight == 0) || (three == 0 && six == 0 && nine == 0) || (one == 0 && five == 0 && nine == 0) || (three == 0 && five == 0 && seven == 0))
	{
		cout << "Du hast gewonnen!" << endl;
		full = 1;
	}
	if ((one == 10 && two == 10 && three == 10) || (four == 10 && five == 10 && six == 10) || (seven == 10 && eight == 10 && nine == 10) || (one == 10 && four == 10 && seven == 10) || (two == 10 && five == 10 && eight == 10) || (three == 10 && six == 10 && nine == 10) || (one == 10 && five == 10 && nine == 10) || (three == 10 && five == 10 && seven == 10))
	{
		cout << "Du hast verloren!" << endl;
		full = 1;
	}
}

void delay()
{
	for (unsigned long wait = 0; wait < delayt; ++wait)
		;
}

void scanfield()
{
	if (place1 == " ")
	{
		one = 1;
	}
	else if (place1 == "X")
	{
		one = 0;
	}
	else if (place1 == "O")
	{
		one = 10;
	}
	if (place2 == " ")
	{
		two = 2;
	}
	else if (place2 == "X")
	{
		two = 0;
	}
	else if (place2 == "O")
	{
		two = 10;
	}
	if (place3 == " ")
	{
		three = 3;
	}
	else if (place3 == "X")
	{
		three = 0;
	}
	else if (place3 == "O")
	{
		three = 10;
	}
	if (place4 == " ")
	{
		four = 4;
	}
	else if (place4 == "X")
	{
		four = 0;
	}
	else if (place4 == "O")
	{
		four = 10;
	}
	if (place5 == " ")
	{
		five = 5;
	}
	else if (place5 == "X")
	{
		five = 0;
	}
	else if (place5 == "O")
	{
		five = 10;
	}
	if (place6 == " ")
	{
		six = 6;
	}
	else if (place6 == "X")
	{
		six = 0;
	}
	else if (place6 == "O")
	{
		six = 10;
	}
	if (place7 == " ")
	{
		seven = 7;
	}
	else if (place7 == "X")
	{
		seven = 0;
	}
	else if (place7 == "O")
	{
		seven = 10;
	}
	if (place8 == " ")
	{
		eight = 8;
	}
	else if (place8 == "X")
	{
		eight = 0;
	}
	else if (place8 == "O")
	{
		eight = 10;
	}
	if (place9 == " ")
	{
		nine = 9;
	}
	else if (place9 == "X")
	{
		nine = 0;
	}
	else if (place9 == "O")
	{
		nine = 10;
	}
	if ((one == 0 || one == 10) && (two == 0 || two == 10) && (three == 0 || three == 10) && (four == 0 || four == 10) && (five == 0 || five == 10) && (six == 0 || six == 10) && (seven == 0 || seven == 10) && (eight == 0 || eight == 10) && (nine == 0 || nine == 10))
	{
		full = 1;
	}
}

void setcross()
{
	if (cross == 1 && place1 == " ")
	{
		place1 = "X";
	}
	if (cross == 2 && place2 == " ")
	{
		place2 = "X";
	}
	if (cross == 3 && place3 == " ")
	{
		place3 = "X";
	}
	if (cross == 4 && place4 == " ")
	{
		place4 = "X";
	}
	if (cross == 5 && place5 == " ")
	{
		place5 = "X";
	}
	if (cross == 6 && place6 == " ")
	{
		place6 = "X";
	}
	if (cross == 7 && place7 == " ")
	{
		place7 = "X";
	}
	if (cross == 8 && place8 == " ")
	{
		place8 = "X";
	}
	if (cross == 9 && place9 == " ")
	{
		place9 = "X";
	}
}

void setcircle()
{
	if (circlepc == one || circlepc == two || circlepc == three || circlepc == four || circlepc == five || circlepc == six || circlepc == seven || circlepc == eight || circlepc == nine)
	{
		if (circlepc == 1 && place1 == " ")
		{
			place1 = "O";
		}
		if (circlepc == 2 && place2 == " ")
		{
			place2 = "O";
		}
		if (circlepc == 3 && place3 == " ")
		{
			place3 = "O";
		}
		if (circlepc == 4 && place4 == " ")
		{
			place4 = "O";
		}
		if (circlepc == 5 && place5 == " ")
		{
			place5 = "O";
		}
		if (circlepc == 6 && place6 == " ")
		{
			place6 = "O";
		}
		if (circlepc == 7 && place7 == " ")
		{
			place7 = "O";
		}
		if (circlepc == 8 && place8 == " ")
		{
			place8 = "O";
		}
		if (circlepc == 9 && place9 == " ")
		{
			place9 = "O";
		}
	}
	else
	{
		delay();
		circlepc = createrandom();
		setcircle();
	}
}

void drawfield()
{
	cout << "\033[2J";					//Bildschirm löschen

	for (faktor1 = 1; faktor1 <= 9; ++faktor1)
	{

		if (faktor1 == 1 || faktor1 == 3 || faktor1 == 4 || faktor1 == 6 || faktor1 == 7 || faktor1 == 9)
		{
			cout << "         |         |         \n";
		}
		if (faktor1 == 2)
		{
			cout << "    " + place1 + "    "
				<< "|" << "    " + place2 + "    "
				<< "|" << "    " + place3 + "    \n";
		}
		if (faktor1 == 5)
		{
			cout << "    " + place4 + "    "
				<< "|" << "    " + place5 + "    "
				<< "|" << "    " + place6 + "    \n";
		}
		if (faktor1 == 8)
		{
			cout << "    " + place7 + "    "
				<< "|" << "    " + place8 + "    "
				<< "|" << "    " + place9 + "    \n";
		}

		if (faktor1 == 3 || faktor1 == 6)
		{
			cout << "-----------------------------\n";
		}

	}
}

int createrandom() 
{
	int random;
	srand((unsigned int)time(NULL));
	random = 1+ rand() % 9;
	return random;
}

void game()
{
	
	for (full; full == 0;)
	{
		drawfield();
		cout << "\nPlatziere dein Kreuz \n(Schreibe z.B. fuer links oben 1 oder rechts oben 3 und rechts unten 9.)\n";
		cin >> cross;
		cin.sync();
		cin.clear();
		setcross();
		scanfield();
		if (full == 1) break;
		scanwin();
		if (full == 1) break;
		circlepc = createrandom();
		setcircle();
		scanfield();
		scanwin();
		if (full == 1) break;
	}
	
	drawfield();
	scanfield();
	scanwin();
	restart();
	
}

int main()
{
	game();
	

	return 0;
}