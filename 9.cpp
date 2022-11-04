#include<iostream>
using namespace std;

class Circle
{
    private:
        int r;
        float area;
    public:
        void set(int x){r=x;}

        float getArea(){ return area;}

        void CalculateA()
        {
            area=2*3.14*r*r;
        }
};

int main()
{
    Circle A1,A2;
    A1.set(5);
    A2.set(4);
    A1.CalculateA();
    A2.CalculateA();
    cout<<"Area is "<<A1.getArea()<<endl;
    cout<<"Area is "<<A2.getArea();
    return 0;
}