#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the day no.:" << endl;
    int d;
    cin>>d;
    if(d==1)
        cout<<"SUNDAY"<<endl;
        else if (d==2)
        cout<<"MONDAY"<<endl;
        else if (d==3)
            cout<<"TUESDAY"<<endl;
        else if(d==4)
            cout<<"WEDNESDAY"<<endl;
        else if(d==5)
            cout<<"THURSDAY"<<endl;
        else if(d==6)
            cout<<"FRIDAY"<<endl;
        else if (d==7)
            cout<<"SATURDAY"<<endl;
        else
            cout<<"INVALID CHOICE"<<endl;
    return 0;
}
