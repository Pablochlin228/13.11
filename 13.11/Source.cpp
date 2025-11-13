#include<iostream>
using namespace std;

class Transport
{
protected:
	string name;
	int ageOfRealise;
	double maxSpeed;
	double weigth;
	int countOfPassengers;
public:
	Transport() {}
	Transport(string n, int a, double s, double w, int p)
	{
		name = n;
		ageOfRealise = a;
		maxSpeed = s;
		weigth = w;
		countOfPassengers = p;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Age of realise: " << ageOfRealise << endl;
		cout << "Max speed: " << maxSpeed << endl;
		cout << "Weidth: " << weigth << endl;
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
	double GetWeigth()
	{
		return weigth;
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
	void SetWeigth(double w)
	{
		if (w > 0)
		{
			weigth = w;
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
	int wheels;
public:
	Truck() {}
	Truck(string n, int a, double s, double w, int p, int b)
	{
		name = n;
		ageOfRealise = a;
		maxSpeed = s;
		weigth = w;
		countOfPassengers = p;
		wheels = b;
	}
};

int main()
{
	Truck obj1("sdsd", 33, 44, 56, 7, 9);
	obj1.Print();
}