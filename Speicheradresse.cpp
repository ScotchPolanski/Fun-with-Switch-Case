#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int eingabe;
	cout << "Eingabe des nicht geforderten Wertes wird zu einem Programmfehler fuehren!\n";
	cout << "1. Ganzzahliger Wert (int) \n";
	cout << "2. float Wert \n";
	cout << "3. double Wert \n";
	cout << "4. Programm schliessen\n";

	cout << "\n";
	cout << "=== Bitte einen Wert aussuchen ===\n";
	cout << endl;
	cin >> eingabe;

		int intEingabe;
		float floatEingabe;
		double doubleEingabe;
		switch (eingabe)
		{
		case 1: cout << "Sie haben " << eingabe << " ausgewaehlt.\n" << "Bitte ganzzahligen Wert eingeben: "; cin >> intEingabe; cout << intEingabe << " ist in der Speicheradresse " << &intEingabe << " gespeichert." << endl; break;
		case 2: cout << "Sie haben " << eingabe << " ausgewaehlt.\n" << "Bitte float Wert eingeben: "; cin >> floatEingabe; cout << floatEingabe << " ist in der Speicheradresse " << &floatEingabe << " gespeichert." << endl; break;
		case 3: cout << "Sie haben " << eingabe << " ausgewaehlt.\n" << "Bitte double Wert eingeben: "; cin >> doubleEingabe; cout << doubleEingabe << " ist in der Speicheradresse " << &doubleEingabe << " gespeichert." << endl; break;
		case 4: cout << "Sie haben " << eingabe << " ausgewaehlt. \n" << "Programm wird in 5 Sekunden geschlossen!\n"; Sleep(5000); return 0;
		default: cout << "Falscher Wert!"; Sleep(2000); system("CLS"); break;
		}
	while (eingabe != 4)
	{
		int eingabe;
		cout << endl;
		cout << "Eingabe des nicht geforderten Wertes wird zu einem Programmfehler fuehren!\n";
		cout << "1. Ganzzahliger Wert (int) \n";
		cout << "2. float Wert \n";
		cout << "3. double Wert \n";
		cout << "4. Programm schliessen\n";

		cout << "\n";
		cout << "=== Bitte einen Wert aussuchen ===\n";
		cout << endl;
		cin >> eingabe;

		int intEingabe;
		float floatEingabe;
		double doubleEingabe;
		switch (eingabe)
		{
		case 1: cout << "Sie haben " << eingabe << " ausgewaehlt.\n" << "Bitte ganzzahligen Wert eingeben: "; cin >> intEingabe; cout << intEingabe << " ist in der Speicheradresse " << &intEingabe << " gespeichert." << endl; break;
		case 2: cout << "Sie haben " << eingabe << " ausgewaehlt.\n" << "Bitte float Wert eingeben: "; cin >> floatEingabe; cout << floatEingabe << " ist in der Speicheradresse " << &floatEingabe << " gespeichert." << endl; break;
		case 3: cout << "Sie haben " << eingabe << " ausgewaehlt.\n" << "Bitte double Wert eingeben: "; cin >> doubleEingabe; cout << doubleEingabe << " ist in der Speicheradresse " << &doubleEingabe << " gespeichert." << endl; break;
		case 4: cout << "Sie haben " << eingabe << " ausgewaehlt. \n" << "Programm wird in 5 Sekunden geschlossen!\n"; Sleep(5000); return 0;
		default: cout << "Falscher Wert!"; Sleep(2000); system("CLS"); break;
		}
	}
}