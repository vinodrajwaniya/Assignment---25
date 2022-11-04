#include<iostream>
using namespace std;

class Fact
{
    private:
        int n;
        int fact;
    public:
        void setN(int f) { n=f; }

        int getN()
        {
            return n;
        }

        int getFactorial()
        {
            return fact;
        }

        int calculateFactorial()
        {
            int i,f=1;
            if(n<=0)
            {
                fact = 1;
                return 1;
            }
            for(i=1; i<=n; i++)
            {
                f=f*i;
            }
            fact = f;
        }

};

int main()
{
    Fact f1,f2;
    f1.setN(6);
    f2.setN(5);
    f1.calculateFactorial();
    f2.calculateFactorial();
    cout<<"Factorial of "<<f1.getN()<<" is "<<f1.getFactorial();
    cout<<"Factorial of "<<f2.getN()<<" is "<<f2.getFactorial();
    return 0;
}