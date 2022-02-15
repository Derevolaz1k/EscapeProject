#include <iostream>

using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
		cout << "Hi" << endl; //Перенос на след. строку с помощью endl
	cout <<"\t"<< "Where are you ? - \"fine\" ";	 //табуляция с помощьюю (\t) и кавычки с помощью (\"")


	//Задача 1:
	cout <<"\t\t\t"<< "   Привет Мир!" << endl; // форматируем текст с помощью ескейп последовательностей
	cout << "\t" << "\\\\Dennis Ritchi\\\\" << endl; // форматируем текст с помощью ескейп последовательностей 
	cout << "\n\n\n";


	//Задача 2
	cout << "     ^" << "                              \\|/";// Солнце, ракета, человек с помощью cout и ecape последовательностей
	cout << "\n   .\" \". " << "                           -O-";
	cout << "\n  :_____:" << "                           /|\\";
		cout << "\n  |     |"<< "              0  ";
		cout << "\n  | M31 |"<< "             /|\\     /\\";
		cout << "\n  |     |"<< "  ___________/ \\____|__|____";
		cout << "\n /|     |\\";
		cout << "\n/_|_____|_\\";
		cout << "\n  /\\   /\\  ";
		cout << "\n  \"\"   \"\"  ";
		cout << "\n\n";
		
	//Задача 3:
	cout << "To be, oe not to be: that is the question:"
		<< endl << "Whether 'tis nobler in the mind to suffer" 
		<< endl << "The slings and arrows of outrageous fortune,"
		<< endl << "Or to take arms against a sea of troubles," 
		<< endl << "And by opposing and them?" 
		<< endl << "   William Shakespeare";
	cout << "\n\n\n";
		
	return 0;

}
