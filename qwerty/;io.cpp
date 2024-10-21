//1. Лампа 
/*
#include <iostream>
using namespace std;

class Lamp {
public:
	string brend;
	double model;
	double Brightness;
	double Modes;
	string material;

	void On(){
		cout << "Lamp on!\n";
	}
	void Off() {
		cout << "Lamp off!\n";
	}
	void SoketOn() {
		cout << "The lamp is turned on in the socket\n";// Лампа включена в розетку
	}
	void SoketOff() {
		cout << "The lamp is turned off in the socket\n";// Лампа выключена в розетку
	}
	void WentOut() {
		cout << "The lamp went out\n";
	}
	void MakeSound() {
		cout << "Zszszsz!!!\n";
	}
};
int main() {
	Lamp lamp;
	lamp.brend = "Samsung";
	lamp.model = 2349753;
	lamp.material = "Metal";
	lamp.Modes = "on" and "off";
	lamp.Brightness = "Bright" and "Dim";
	lamp.SoketOn();
	lamp.MakeSound();
	lamp.On();
	lamp.SoketOff();
	lamp.MakeSound();
	lamp.Off();
	lamp.WentOut();
}
*/
//2. Телефон
/*
#include <iostream>
using namespace std;
class Phone {
public:

	string mark;
	string color;
	double price;
	string model;
	string material;

	void Phoneon() {
		cout << "Tелефон включен\n";
	}
	void Phoneoff() {
		cout << "Tелефон выключен\n";
	}
	void Song() {
		cout << "Tелефон звонит\n";
	}
	void Phonegps() {
		cout << "Tелефон лежит в руке\n ";
	}
	void BatteryPhone() {
		cout << "Tелефон стоит на зарядке\n ";
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	Phone phone;
	phone.mark = "Iphone";
	phone.color = "gold";
	phone.material = "Gold";
	phone.model = 16;
	phone.price = 500;
	phone.BatteryPhone();
	phone.Phoneoff();
	phone.Phoneon();
	phone.Song();
	phone.Phonegps();
}*/
//3.Собака
/*
#include <iostream>
using namespace std;

class Dog {
public:

	string name;
	string color;
	string Character;
	string family;
	string wool;
	string tail;

	void eat() {
		cout << "Dog is eating\n";
	}
	void bark() {
		cout << "Dog is barking\n";
	}
	void run() {
		cout << "Dog is running\n";
	}
	void sleep() {
		cout << "Dog is sleeping\n";
	}
	void growl() {
		cout << "Dog is growling\n";
	}
};
int main(){
	Dog dog;
	dog.Character = "Normal";
	dog.color = "black";
	dog.family = "big family";
	dog.name = "Sharik";
	dog.tail = "long";
	dog.wool = "Soft";
	dog.bark();
	dog.eat();
	dog.growl();
	dog.run();
	dog.sleep();

}*/
/*
#include <iostream>
using namespace std;
class Bancnota {
public:
	string currency;
	int value;
	string serialNumber;
	string country;
	int year;

	void Value() {
		cout << "Denomination 500 hryvnia\n";
	}
	void Year() {
		cout << "Year of manufacture 2024\n";
	}
	void Country() {
		cout << "Country Ukraine\n";
	}
	void SerialNumber() {
		cout << "Serial number (3468345) ";
	}
	void Currency() {
		cout << "Hryvnia";
	}
};
int main(){
	Bancnota bancnota;
	bancnota.Country();
	bancnota.Currency();
	bancnota.Value();
	bancnota.Year();
	bancnota.SerialNumber();
}
*/
#include <iostream>
using namespace std;

class Kettle {
public:
	string model;
	string color;
	double weight;
	double width;
	string mark;

	void Kipit() {
		cout << "The kettle is boiling\n";
	}
	void Svistit() {
		cout << "ZYYZYZYYZYZYZY!\n";
	}
	void LampaGorit() {
		cout << "The light is on\n";
	}
	void On() {
		cout << "kettel is on\n";
	}
	void Off() {
		cout << "kettel is off\n";
	}
};
int main() {
	Kettle kettle;
	kettle.model;
	kettle.color;
	kettle.mark;
	kettle.weight;
	kettle.width;
	kettle.Kipit();
	kettle.LampaGorit();
	kettle.Off();
	kettle.On();
	kettle.Svistit();
}