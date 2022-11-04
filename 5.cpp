#include<iostream>
using namespace std;

class Reverse
{
    private:
        int n;
        int rev;
    public:
        void setN(int k) {n=k;}

        int getN()
        {
            return n;
        }
        int getrev() {return rev;}

        void reverse()
        {
            int p=n;
            while (p)
            {
                int m;
                m=p%10;
                rev=rev*10+m;
                p=p/10;
            }
        }
};


int main()
{
    Reverse n1;
    n1.setN(321);
    n1.reverse();
    cout<<"Reverse of " <<n1.getN() <<" is "<<n1.getrev();
    return 0;
}