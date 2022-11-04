#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int x, int y) {a=x; b=y; }

        void printData() 
        {
            cout<<"\nReal = "<<a<<" Img = "<<b;
        }
};

int main()
{
    Complex c1,c2;
    c1.setData(3, 5);
    c2.setData(5, 6);

    c1.printData();
    c2.printData();
    cout<<endl;

}