#include<iostream>
using namespace std;
class Time
{
    private:
     int hr,min,sec;
    public:
     void setTime(int hr,int min,int sec)
     {
        this->hr=hr;
        this->min=min;
        this->sec=sec;
     }
     void showTime()
     {
        cout<<endl<<"Time :"<<hr<<":"<<min<<":"<<sec;
     }
    //  SETTERS AND GETTERS
    void setHour(int hr){this->hr=hr;}
    void setmin(int min){this->min=min;}
    void setHour(int sec){this->sec=sec;}
    int getHour(){return hr;}
    int getmin(){return min;}
    int getsec(){return sec;}
};