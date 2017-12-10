#include <iostream>
#include <conio.h>
#include <cmath> // pow gibi fonk.lari kullanabilmek icin kutuphane
//SEMIH
using namespace std;

int main(){	// PI SAYISI HESAPLAMA
	float PI=1, SAYI=1, I=0, N;
	cout << "Kac adimda olsun?\n";
	cin >> N; // ne kadar buyuk bir deger girilirse o kadar pi sayisina yaklasir
	A10:
	PI*=pow((SAYI+1),2)/(SAYI*(SAYI+2)); // pi formulu uyguladim
	SAYI+=2;
	I++;
	if (I>N){
		cout << "pi = " << (2*PI) << endl;
	}else{
		goto A10;
	}
	getch();
	return 0;
}
