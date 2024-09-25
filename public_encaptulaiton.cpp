#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class A {
private:
    int value;

public:
    A() : value(5) {}  // Constructor that initializes value to 5

    void display() const {
        cout << value << endl;  
    }
};

int main() {
    ROBOT_RIAD;
    A obj;
    obj.display();
    return 0;
}
