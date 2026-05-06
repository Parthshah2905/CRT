#include<iostream>
using namespace std;


class student{
    public:

    string name;
    int rollno;

    void display(){
        cout<<"name"<<name<<endl;
        cout<<"rollno"<<rollno<<endl;
    }
};

int main()
{
    student s1;
    s1.name="parth";
    s1.rollno=10;
    s1.display();

    return 0;
}