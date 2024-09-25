#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class A {
protected:
    string name;  // Protected member variable

public:
    // Constructor for A
    A(const string& name){
        this->name = name;
    }

    // Method to display the name
    void display() const {
        cout << name << endl;
    }
};

// Derived class

class B : public A {
public:
    // Constructor for B that calls the base class constructor
    B(const string& name) : A(name) {}
};



int main() {
    ROBOT_RIAD;
    B obj("Sayed");
    obj.display();
    return 0;
}
