#include<iostream>
using namespace std;

class Time
{
    private:
        int hr,mit,sec;
    public:
        void setData(int hour, int mint, int se)
        {
            hr=hour;
            mit=mint;
            sec=se;
        }
        void printData()
        {
            cout<<"\n"<<hr<<" hr "<<mit<<" Min "<<sec<<" sec ";
        }
};

int main()
{
    Time T1,T2;
    T1.setData(3, 14,56);
    T2.setData(8, 20, 45);
    T1.printData();
    T2.printData();
    cout<<endl;
}