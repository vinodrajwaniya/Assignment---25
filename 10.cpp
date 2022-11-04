#include<iostream>
using namespace std;

class Area
{
    private:
        float side,length,breath,radius;
    public:
        void setside(float a){ side = a; }
        void setlengthbreath(float l, float b) { length=l;  breath=b;  }
        void setradius(float r) { radius = r; }

        float areaOfSquare()
        {
            return side*side;
        }
        int areaOfrectangle()
        {
            return length*breath;

        }
        float areaOfCircle()
        {
            return 3.14*radius*radius;
        }

    
};

int main()
{
    Area a;
    a.setside(5);
    a.setlengthbreath(3,4);
    a.setradius(3);
    cout<<"Area of Square is "<<a.areaOfSquare()<<endl;
    cout<<"Area of Rectangle is "<<a.areaOfrectangle()<<endl;
    cout<<"Area of Circle is "<<a.areaOfCircle()<<endl;
    return 0;
}