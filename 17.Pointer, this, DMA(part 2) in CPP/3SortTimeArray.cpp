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
    bool operator>(Time T)
        {
            if(hr>T.hr)
                return true;
            else if (hr<T.hr)
                return false;
            else if (min>T.min)
                return true;
            else if (min<T.min)
                return false;
            else if(sec>T.sec)
                return true;
            else
                return false;
        }

};
// Time type ka array of given size
Time* getTimeArray(int size)
{
    Time *ptr=new Time[size]; //OR return new Time[size];
    return ptr;
}
void sortTime(Time t[],int size)
{
    int r,i;
    Time temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(t[i]>t[i+1])
            {
                temp=t[i];
                t[i]=t[i+1];
                t[i+1]=temp;
            }
        }
    }
}