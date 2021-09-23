#include<bits/stdc++.h>
using namespace std;

class staff{
    public:
        int code;
        string name;

    void getdata()
    {
        cout<<"Enter the code :"<<endl;
        cin>>code;
        cout<<"Enter the name :"<<endl;
        cin>>name;
    }

    void display()
    {
        cout<<"Your name is : "<<name<< "and your code is : "<<code<<endl;
    }

};

class teachers : public staff{
    public:
        string sub;
        int publications;
    
    void getdata()
    {
        staff::getdata();
        cout<<"Enter the subject name : "<<endl;
        cin>>sub;
        cout<<"Enter the publication no :"<<endl;
        cin>>publications;
    }

    void display()
    {
        staff::display();
        cout<<"Your subject is : "<<sub<<" and no of publication is : "<<publications<<endl;
    }
};

class typist : public staff{
    public:
        int speed;

        void getdata(){
            staff ::getdata();
            cout<<"Enter your typing speed : "<<endl;
            cin>>speed;
        }

        void display(){
            staff::display();
            cout<<"your typing speed is :"<<speed<<endl;
        }
};

class officers : public staff{
    int grade;
    public:

        void getdata()
        {
            staff::getdata();
            cout<<"Enter the grade : "<<grade<<endl;
            cin>>grade;
        }

        void display()
        {
            staff::display();
            cout<<"Your grade is : "<<grade<<endl;
        }
};

class regular : virtual public typist{

    public:
        double salary;
        void getdata()
        {
            typist::getdata();
            cout<<"Enter your salary :"<<endl;
            cin>>salary;
    
        }

        void display()
        {
            typist::display();
            cout<<"YOur salary is : "<<salary<<endl;
        }
};

class casual : virtual public typist{
    public:
        double daily_wages;

        void getdata()
        {
            staff::getdata();
            typist::getdata();
            cout<<"Enter your daily wages: "<<endl;
            cin>>daily_wages;
        }

        void display()
        {

        }
};

int main()
{
    staff obj1;
    teachers obj2;
    typist obj3;
    officers obj4;
    regular obj5;
    casual obj6;
    int ch;
    char chq;
    cout<<"Select one option \n 1. Typist \n 2. Officers \n 3. Teachers"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        {
            cout<<"Enter (r) for regular or (c) for casual"<<endl;
            cin>>chq;
            if(chq == 'r' || chq == 'R')
            {
                obj5.getdata();
                obj5.display();

            }
            else{
                obj6.getdata();
                obj6.display();
            }
            break;
       }
    case 2:{

        obj4.getdata();
        obj4.display();
        break;
    } 
    case 3:{
        obj2.getdata();
        obj2.display();
        break;
    }
    default:
        break;
    }
}