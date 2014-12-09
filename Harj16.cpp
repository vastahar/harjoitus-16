// HARJOITUS 16
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

struct HENKTIED
{
	char etunimet[20];
	char sukunimi[20];
	char osoite[20];
	float koulumatka;
	int postinro;
	int	kenka;
};

void main()
{
	HENKTIED henkilo;

	cout << "Anna etunimet: " << endl;
	cin.get(henkilo.etunimet, 20);
	cout << "Anna sukunimi: " << endl;
	cin.get();
	cin.get(henkilo.sukunimi, 20);
	cout << "Anna osoite: " << endl;
	cin.get();
	cin.get(henkilo.osoite, 20);
	cout << "Anna koulumatka: " << endl;
	cin >> henkilo.koulumatka;
	cout << "Anna postinumero: " << endl;
	cin >> henkilo.postinro;
	cout << "Anna kengannumero: " << endl;
	cin >> henkilo.kenka;

	cout << endl;
	cout << henkilo.etunimet << " " << henkilo.sukunimi << endl;
	cout << henkilo.osoite << endl;
	cout << henkilo.postinro << endl;
	cout << henkilo.kenka << " " << henkilo.koulumatka << endl;
}