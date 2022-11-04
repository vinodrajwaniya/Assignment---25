#include<iostream>
using namespace std;

class Square
{
    private:
        int n;
        int sq;
        static int count;
    public:
        void setN(int a) {n=a;}
        int getdataN() {return n;}
        int getdataSq() {return sq;}
        int getdataC() {return count;};
        void sqr()
        {
            sq=n*n;
            count++;
        }
};
int Square :: count = 0;

int main()
{
    Square s1,s2;
    s1.setN(5);
    s1.sqr();
    cout<<"Square of "<<s1.getdataN()<<" is "<<s1.getdataSq()<<" and count is "<<s1.getdataC()<<endl;
    return 0;
}