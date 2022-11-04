#include<iostream>
using namespace std;

class Greatest
{
    private:
        int a,b,c,Gr;
    public:
        void set(int p, int q, int r)
        {
            a=p;
            b=q;
            c=r;
        }
        int getGr(){ return Gr;}

        void CalculateGr()
        {
            if(a>b)
            {
                if(a>c)
                    Gr=a;
                else
                    Gr=c;
            }
            else if(b>c)
                Gr=b;
            else
                Gr=c; 
        }
};

int main()
{
    Greatest g1,g2;
    g1.set(2,6,1);
    g2.set(6,8,3);
    g1.CalculateGr();
    g2.CalculateGr();
    cout<<"Greatest no is "<<g1.getGr()<<endl;
    cout<<"Greatest no is "<<g2.getGr();
    return 0;
}