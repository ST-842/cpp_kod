#include <iostream>
#include<string>

using namespace std;
int main() {
	//Türkce karakter giriþi izni için
	setlocale(LC_ALL, "Turkish");

	//kullanýcý adý ve þifre alýp bir siteye giriþ için bilgileri soran bir program
	string KullaniciAdi, KullaniciSifresi, _KullaniciAdi, _KullaniciSifresi;
	cout << "Bir kullanýcý adý i,le þifre oluþturmanýz gerekli. \n";
	cout << "Kullanýcý adý giriniz : ";
	cin >> KullaniciAdi;
	cout << "Þifrenizi giriniz : ";
	cin >> KullaniciSifresi;
	cout << "Adýnýz ve þifreniz kaydediliyor...\n";


	do
	{
		cout << "Kullanýcý adý ve þifreyi giriniz." << endl;
		cout << "Kullanýcý adý : ";
		cin >> _KullaniciAdi;
		cout << "Þifre : ";
		cin >> _KullaniciSifresi;
		if (KullaniciAdi != _KullaniciAdi or KullaniciSifresi != _KullaniciSifresi) {
			cout << "Þifre veya kullanýcý adý yanlýþ." << endl;
			cout << "Lütfen tekrar giriniz." << endl;
		}

	} while (KullaniciAdi!=_KullaniciAdi or KullaniciSifresi!=_KullaniciSifresi);

	cout << "Hoþgeldiniz";

	cout << endl;
	return 0;
}