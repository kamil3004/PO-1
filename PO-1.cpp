// PO-1.cpp: definiuje punkt wejścia dla aplikacji.
//

#include <iostream>



using namespace std;

class kalkulator {
	public:
		int x = 0;
		int y = 0;
		int z = 0;
		void wprowadzanie_liczb();
		void mnozenie();
		void petla();
};

void kalkulator::wprowadzanie_liczb()
{
	cout << "Wprowadz x: ";
	cin >> x;
	cout << "Wprowadz y: ";
	cin >> y;
	cout << x << " * " << y << endl;
}
void kalkulator::mnozenie() {
	z = x * y;
	cout << "Wynik to: " << z << endl;
}
void kalkulator::petla() {
	char klawisz;
	do
	{
		kalkulator::wprowadzanie_liczb();
		kalkulator::mnozenie();
		cout << "Aby opuscic program wcisnij e lub inny aby kontynuowac \n";
		cin >> klawisz;

	} while (klawisz!='e');
	cout << "Koniec";
	return ;
}


int main()
{
	cout << "Witaj w programie mnozacym 2 liczby calkowite" << endl;
	kalkulator kk;
	kk.petla();
	return 0;
}
