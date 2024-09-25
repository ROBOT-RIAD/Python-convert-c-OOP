#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;


// Base class 
class Person {
protected:
    string name;
    int age;

public:
    // Constructor 
    Person(const string& name, int age) {
        this->name = name;
        this->age = age;
    }

    // Method to display 
    void personalInfo() const {
        cout << name << " - " << age << endl;
    }
};

// Base class
class Company {
protected:
    string cname;
    string cloc;

public:
    // Constructor 
    Company(const string& cname, const string& cloc) {
        this->cname = cname;
        this->cloc = cloc;
    }

    // Method to display company information
    void companyInfo() const {
        cout << cname << " - " << cloc << endl;
    }
};

// Derived class 
class Employee : public Person, public Company {
public:
    // Constructor 
    Employee(const string& name, int age, const string& cname, const string& cloc)
        : Person(name, age), Company(cname, cloc) {}
};

int main() {
    ROBOT_RIAD;
    Employee obj("Sayed", 24, "Google", "USA");
    obj.companyInfo();
    obj.personalInfo();
    return 0;
}
