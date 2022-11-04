#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int l,b,area;
    public:
        void set(int x, int y){l=x; b=y;}

        int getArea(){ return area;}

        void CalculateA()
        {
            area=l*b;
        }
};

int main()
{
    Rectangle A1,A2;
    A1.set(5, 7);
    A2.set(4, 5);
    A1.CalculateA();
    A2.CalculateA();
    cout<<"Area is "<<A1.getArea()<<endl;
    cout<<"Area is "<<A2.getArea();
    return 0;
}