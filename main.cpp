#include <iostream>

using namespace std;

int main()
{
    double tc,tcd;
    double dis;
    cout << "Enter the total cost: " << endl;
    cin>>tc;
    if(tc>1000)
        {
    dis=(10.0/100.0)*tc;
    tcd=tc-dis;
    }
    else{
        tcd=tc;
    }
    cout<<"The total cost after discount is: "<<tcd<<endl;

    return 0;
}
