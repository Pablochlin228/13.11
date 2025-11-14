#include<iostream>
using namespace std;

class Transport
{
protected:
	string name;
	int ageOfRealise;
	double maxSpeed;
	double weight;
	int countOfPassengers;
public:
	Transport() {}
	Transport(string n, int a, double s, double w, int p)
	{
		name = n;
		ageOfRealise = a;
		maxSpeed = s;
		weight = w;
		countOfPassengers = p;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age of realise: " << ageOfRealise << endl;
		cout << "Max speed: " << maxSpeed << endl;
		cout << "Weidth: " << weight << endl;
		cout << "Passengers: " << countOfPassengers << endl;
	}
	string GetName()
	{
		return name;
	}
	int GetAgeOfRealise()
	{
		return ageOfRealise;
	}
	double GetMaxSpeed()
	{
		return maxSpeed;
	}
	double GetWeight()
	{
		return weight;
	}
	int GetCountOfPassengers()
	{
		return countOfPassengers;
	}
	void SetAgeOfRealise(int a)
	{
		if (a >= 1885)
		{
			ageOfRealise = a;
		}
	}
	void SetName(string n)
	{
		name = n;
	}
	void SetMaxSpeed(double m)
	{
		if (m > 0)
		{
			maxSpeed = m;
		}
	}
	void SetWeight(double w)
	{
		if (w > 0)
		{
			weight = w;
		}
	}
	void SetCountOfPassengers(int p)
	{
		if (p > 0)
		{
			countOfPassengers = p;
		}
	}
};

class Truck : public Transport 
{
	double wheelsSize;
	double volumeOfEngine;
public:
	Truck() {}
	Truck(string n, int a, double s, double w, int p, double wS,double v)
	{
		name = n;
		ageOfRealise = a;
		maxSpeed = s;
		weight = w;
		countOfPassengers = p;
		wheelsSize = wS;
		volumeOfEngine = v;
	}
	void Print()
	{
		Transport::Print();
		cout << "Size of the wheels: " << wheelsSize << endl;
		cout << "Volume of engine: " << volumeOfEngine << endl;
	}
	double GetWheelsSize()
	{
		return wheelsSize;
	}
	double GetVolumeOfEngine()
	{
		return volumeOfEngine;
	}
	void SetWheelsSize(double w)
	{
		if (w > 0)
		{
			wheelsSize = w;
		}
	}
	void SetVolumeOfEngine(double v)
	{
		if (v > 0)
		{
			volumeOfEngine = v;
		}
	}
};

class Plane : public Transport
{
	double wingspan;
	double enginePower;
public:
	Plane() {}
	Plane(string n, int a, double s, double w, int p, double ws, double eP)
	{
		name = n;
		ageOfRealise = a;
		maxSpeed = s;
		weight = w;
		countOfPassengers = p;
		wingspan = ws;
		enginePower = eP;
	}
	void Print()
	{
		Transport::Print();
		cout << "Wingspan: " << wingspan << endl;
		cout << "Engine power: " << enginePower << endl;
	}
	double GetWingspan()
	{
		return wingspan;
	}
	double GetEnginePower()
	{
		return enginePower;
	}
	void SetWingspan(double w)
	{
		if (w > 0)
		{
			wingspan = w;
		}
	}
	void SetEnginePower(double e)
	{
		if (e > 0)
		{
			enginePower = e;
		}
	}
};

class Ship : public Transport
{
	double lenght;
	int countOfScrew;
	double waterline;
public:
	Ship() {}
	Ship(string n, int a, double s, double w, int p, double l, int sc, double wl)
	{
		name = n;
		ageOfRealise = a;
		maxSpeed = s;
		weight = w;
		countOfPassengers = p;
		lenght = l;
		countOfScrew = sc;
		waterline = wl;
	}
	void Print()
	{
		Transport::Print();
		cout << "Lenght: " << lenght << endl;
		cout << "Count of screw: " << countOfScrew << endl;
		cout << "Waterline: " << waterline << endl;
	}
	double GetLenght()
	{
		return lenght;
	}
	double GetWaterline()
	{
		return waterline;
	}
	int GetCountOfScrew()
	{
		return countOfScrew;
	}
	void SetLenght(double l)
	{
		if (l > 0)
		{
			lenght = l;
		}
	}
	void SetWaterline(double wl)
	{
		if (wl > 0)
		{
			waterline = wl;
		}
	}
	void SetCountOfScrew(int c)
	{
		if (c > 0)
		{
			countOfScrew = c;
		}
	}
};

class Car : public Transport
{
	string color;
	double vat;
public:
	Car() {}
	Car(string n, int a, double s, double w, int p, string c, double v) :Transport(n, a, s, w, p)
	{
		color = c;
		vat = v;
	}
	void Print()
	{
		Transport::Print();
		cout << "Color: " << color << endl;
		cout << "Vat: " << vat << endl;
	}
	string GetColor()
	{
		return color;
	}
	double GetVat()
	{
		return vat;
	}
	void SetColor(double c)
	{
		color = c;
	}
	void SetVat(double v)
	{
		if (v > 0)
		{
			vat = v;
		}
	}
};

class Bike : public Transport
{
	string type;
public:
	Bike() {}
	Bike(string n, int a, double s, double w, int p, string t) :Transport(n, a, s, w, p)
	{
		type = t;
	}
	void Print()
	{
		Transport::Print();
		cout << "Type: " << type << endl;
	}
	string GetType()
	{
		return type
	}
};

class Tank : public Transport
{

};

int main()
{
	Truck obj1("Truck", 2018, 74.6, 100, 7,4,8.5);
	obj1.Print();
	Plane obj2("Plane", 2020, 220, 88, 4, 3, 12);
	obj2.Print();
	Ship obj3("Ship", 2010, 105.6, 312, 360, 30, 22,12);
	obj3.Print();
	obj3.SetCountOfPassengers(500);
	obj3.Print();
	Car obj4("Car", 2019, 23, 5, 5, "blue", 66);
	obj4.Print();
}