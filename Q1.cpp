#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    
    Student(string n, int r) 
	{
        name = n;
        rollNumber = r;
    }

    
    void display() 
	{
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() 
{
   
    Student students[3] = 
	{
        Student("Aarya", 101),
        Student("Vivek", 102),
        Student("Sahil", 103)
    };

   
    for (int i = 0; i < 3; i++) 
	{
        students[i].display();
    }

    return 0;
}
