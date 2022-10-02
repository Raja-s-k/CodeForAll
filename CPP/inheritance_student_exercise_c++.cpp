#include <iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    public:
    employee(int a,string b)
    {
        id=a;
        name=b;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
};
class fulltimeemployee:public employee
{
    private:
    int salary;
    public:
    fulltimeemployee(int a,string b,int i):employee(a,b)
    {
        salary=i;
    }
    int getsalary()
    {
        return salary;
    }
};
class parttimeemployee:public employee
{
    private:
    int wages;
    public:
    parttimeemployee(int a,string b,int i):employee(a,b)
    {
        wages=i;
    }
    int getwages()
    {
        return wages;
    }
};
int main()
{
    fulltimeemployee a1(1,"aman",3400);
    parttimeemployee a2(34,"vasu",120);
    cout<<"monthly income of "<<a1.getname()<<" whose id is "<<a1.getid()<<" is "<<a1.getsalary()<<endl;
    cout<<"daily wage of "<<a2.getname()<<" whose id is "<<a2.getid()<<" is "<<a2.getwages()<<endl;
    return 0;
}
