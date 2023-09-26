#include<iostream>
using namespace std;
class Time
{
    private:
     int hr,min,sec;
    public:
     void normalise()
     {
        min+=sec/60;
        sec=sec%60;
        hr+=min/60;
        min=min%60;
     }
     void setTime(int hr,int min,int sec)
     {
        this->hr=hr;
        this->min=min;
        this->sec=sec;
        normalise();
     }
     void showTime()
     {
        cout<<endl<<"Time :"<<hr<<":"<<min<<":"<<sec;
     }
    //  SETTERS AND GETTERS
    void setHour(int hr){this->hr=hr;}
    void setMin(int min){this->min=min;}
    void setSec(int sec){this->sec=sec;}
    int getHour(){return hr;}
    int getMin(){return min;}
    int getSec(){return sec;}
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
void showTimeArray(Time t[],int size)
{
    for(int i=0;i<size;i++)
        t[i].showTime();
}
int main()
{
    int size;
    cout << "Enter the number of Time objects to create: ";
    cin >> size;

    // Create an array of Time objects
    Time *timeArray = getTimeArray(size);

    // Input time values for each object
    for (int i = 0; i < size; i++)
    {
        int hr, min, sec;
        cout << "Enter the time for Time object " << i + 1 << " (hh mm ss): ";
        cin >> hr >> min >> sec;
        timeArray[i].setTime(hr, min, sec);
    }

    // Sort the array of Time objects
    sortTime(timeArray, size);

    // Display the sorted times
    cout << "\nSorted Times:\n";
    showTimeArray(timeArray, size);

    // Clean up memory
    delete[] timeArray;

    return 0;
}