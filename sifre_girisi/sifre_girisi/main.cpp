#include <iostream>
#include<string>

using namespace std;
int main() {
	//T�rkce karakter giri�i izni i�in
	setlocale(LC_ALL, "Turkish");

	//kullan�c� ad� ve �ifre al�p bir siteye giri� i�in bilgileri soran bir program
	string KullaniciAdi, KullaniciSifresi, _KullaniciAdi, _KullaniciSifresi;
	cout << "Bir kullan�c� ad� i,le �ifre olu�turman�z gerekli. \n";
	cout << "Kullan�c� ad� giriniz : ";
	cin >> KullaniciAdi;
	cout << "�ifrenizi giriniz : ";
	cin >> KullaniciSifresi;
	cout << "Ad�n�z ve �ifreniz kaydediliyor...\n";


	do
	{
		cout << "Kullan�c� ad� ve �ifreyi giriniz." << endl;
		cout << "Kullan�c� ad� : ";
		cin >> _KullaniciAdi;
		cout << "�ifre : ";
		cin >> _KullaniciSifresi;
		if (KullaniciAdi != _KullaniciAdi or KullaniciSifresi != _KullaniciSifresi) {
			cout << "�ifre veya kullan�c� ad� yanl��." << endl;
			cout << "L�tfen tekrar giriniz." << endl;
		}

	} while (KullaniciAdi!=_KullaniciAdi or KullaniciSifresi!=_KullaniciSifresi);

	cout << "Ho�geldiniz";

	cout << endl;
	return 0;
}