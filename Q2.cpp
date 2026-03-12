#include<iostream>
using namespace std;

class Car {
private:
    string model;
    int year;
    int speed;

public:
   
    void setModel(string m) 
	{
        model = m;
    }

    void setYear(int y) 
	{
        year = y;
    }

    void setSpeed(int s) 
	{
        speed = s;
    }

    
    string getModel() 
	{
        return model;
    }

    int getYear() 
	{
        return year;
    }

    int getSpeed() 
	{
        return speed;
    }
};

int main() {
    Car c;
 
    c.setModel("Lancer");
    c.setYear(2025);
    c.setSpeed(120);
    
    cout << "Model: " << c.getModel() << endl;
    cout << "Year: " << c.getYear() << endl;
    cout << "Speed: " << c.getSpeed() << " km/h" << endl;

    return 0;
}
