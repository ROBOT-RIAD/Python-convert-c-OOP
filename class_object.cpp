#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class A{
    public:
    int value;
    //constructor
    A(int value){
        this->value = value;
        cout<<"Constructor Called"<<endl;
    }

    //method
    void display(){
        cout<<"Hello\n";
    }

    //destructor
    ~A(){
        cout<<"Desonstructor Called"<<endl; //auto call
    }
};

int main() {
    ROBOT_RIAD;
    A obj(8);
    obj.display();
    obj.value = 5;
    cout<<obj.value<<endl;
    return 0;
}
