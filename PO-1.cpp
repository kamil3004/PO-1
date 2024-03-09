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
		void wynik();

};

void kalkulator::wprowadzanie_liczb()
{
	cout << "Wprowadz x: ";
	cin >> x;
	cout << "Wprowadz y: ";
	cin >> y;
	cout << x << " * " << y << endl;

}



int main()
{
	cout << "Witaj w programie mnozacym 2 liczby calkowite" << endl;
	kalkulator kk;
	kk.wprowadzanie_liczb();
	return 0;
}
