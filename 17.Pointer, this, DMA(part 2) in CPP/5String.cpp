#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char *s;
    int length;
    public:
    String()
    {
        s=NULL;
        length=0;
    }
    void inputString()
    {
        int i,size=1;
        char ch=0,*p,*q;
        cout<<"Enter your string : "<<endl;
        q=new char[size];
        *q='\0';//NULL for memory management
        while(ch!='\n')
        {
            p=new char[size];
            ch=cin.get();
            if(ch==10)
            {
                delete []p;
                s=q;
                length=strlen(s);
                break; //exit from loop imidiately
            }
            //Copy Existing values from q to p
            for(i=0;i<size;i++)
            {
                p[i]=q[i];
            }
            *(p+i-1)=ch;
            delete []q; //existing values copy to p so q deleted
            q=new char[size+1]; //we make new q of 1 greater size than p to store null
            for(i=0;i<size;i++)
              {
                q[i]=p[i];
              }
              q[i]='\0';
              delete []p; //p data copied to q so p released
              size++;
        }
    }
    void showString()
    {
        cout<<endl<<"Your string is:"<<endl<<s;
    }
};
int main() {
String s1;
s1.inputString();
s1.showString();
return 0;
}