#include <iostream>
#include <string>

using namespace std;

class  Info{
public:
	int age;
	string name;
};
void a() {
	cout << "Hallo! hier ist's meine erste c++ Arbeit!\n" << endl;
}
class Company {
public:
	int age = 20;
	string name = "Arina";
};
void c() {
	cout << "Age: 18" << "\tName: Arisha" << endl;
}
class Kalkulator {
public:
	int a;
	int b;
	int c;
	int d;
};
void ka() {
	cout << "Willkommen zum Kalkulator\n";
}
class Bank {
public:
	float usd = 2.05;
	float euro = 2.15;
	int summe;
	int nummer;
	float cash;
};
void ba() {
	cout << "Willkommen zur unserem Online-Bank\n";
}
class Person {
public:
	string name;
	int age;
	Person(string n, int ag) {
		name = n;
		age = ag;
	}
	Person(string n) {
		name = n;
		age = 18;
	}
	Person() {
		name = "Bob";
		age = 22;
	}
};
int a(int, int);

int main() {
	
	
	float usd = 2.1;
	float euro = 2.3;
	int money;
	string currency;
	int cash;
	cout << "Welcome to online-Bank!" << endl;
	cout << "How much money to you want to change?:" << endl;
	cin >> money;
	cout << "In what?: usd, euro" << endl;
	cin >> currency;
	if (currency == "usd") {
		cash = money / usd;
		cout << "Dollar: " << cash << endl;
	}
	else if (currency == "euro") {
		cash = money / euro;
		cout << "Euro: " << cash << endl;
	}
	cout << "Thank you for choosing our Bank.";
	
	
	
	Info b;
	a();
	cout << "Schreiben Sie ihre Name: ";
	cin >> b.name;
	cout << "Schreiben Sie ihre Alter: ";
	cin >> b.age;
	cout << "Name: " << b.name << "\tAge: " << b.age << endl;
	Company com;
	cout << "Age: " << com.age << "\tName: " << com.name << endl;
	c();
	Kalkulator k;
	ka();
	cout << "Was machen wir? (+-1, --2, /-3, *-4)\n";
	cin >> k.a;
	cout << "Geben Sie ihre erste Zahl\n";
	cin >> k.c;
	cout << "Geben Sie ihre zweite Zahl\n";
	cin >> k.d;
	if (k.a == 1) {
		k.b = k.c + k.d;
		cout << "Ergebnis ist: " << k.b << endl;
	}
	else if (k.a == 2) {
		k.b = k.c - k.d;
		cout << "Ergebnis ist: " << k.b << endl;
	}
	else if (k.a == 3) {
		k.b = k.c / k.d;
		cout << "Ergebnis ist: " << k.b << endl;
	}
	else if (k.a == 4) {
		k.b = k.c * k.d;
		cout << "Ergebnis ist: " << k.b << endl;
	}
	Bank bank;
	cout << "Wie viel tauschen wir?\n";
	cin >> bank.summe;
	cout << "Dollar - 1, Euro - 2\n";
	cin >> bank.nummer;
	if (bank.nummer == 1) {
		bank.cash = bank.summe / bank.usd;
		cout << "Ihr Beitrag ist: " << bank.cash << endl;
	}
	else if (bank.nummer == 2) {
		bank.cash = bank.summe / bank.euro;
		cout << "Ihr Beitrag ist: " << bank.cash << endl;
	}
	Person ar;
	cout << "Schreiben Sie Ihre Name: ";
	cin >> ar.name;
	cout << "Schreiben Sie Ihres Alter: ";
	cin >> ar.age;
	cout << "Name: " << ar.name << "\tAge: " << ar.age << endl;
	Person sam("Sam");
	cout << "Name : " << sam.name << "\tAge: " << sam.age << endl;
	Person bob = Person();
	cout << "Name: " << bob.name << "\tAge: " << bob.age << endl;
	// int a(int,int)
	int f;
	int g;
	cout << "Geben Sie ihre erste Zahl zur Multiplizierung: ";
	cin >> f;
	cout << "Geben Sie ihre zweite Zahl zur Multiplizierung: ";
	cin >> g;
	int p = a(f, g);
	cout << p;
}

int a(int f, int g) {
	return f * g;
}










