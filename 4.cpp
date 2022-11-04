#include<iostream>
using namespace std;

class Largest
{
    private:
        int a,b,c;
        int larg;
    public:
        void setN(int x, int y, int z)
        {
            a=x;
            b=y;
            c=z;
        }
        int getN()
        {
            return a;
            return b;
            return c;
        }
        int getLargest()
        {
            return larg;
        }
        void LargestN()
        {
            if(a>b)
            {
                if(a>c)
                    larg=a;
                else
                    larg=c;
            }
            else if(b>c)
                larg=b;
            else
                larg=c; 
        }
};

int main()
{
    Largest k1,k2;
    k1.setN(9,3,7);
    k2.setN(29,45,13);
    k1.LargestN();
    k2.LargestN();
    cout<<"Largest no is "<<k1.getLargest()<<endl;
    cout<<"Largest no is "<<k2.getLargest();
    
}