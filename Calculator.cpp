#include <iostream>
using namespace std;

//Made with love by Prime :)

int main()
{
    cout<<"Welcome Dear User\n";
    char m = 's';
    int a,b;
    while(m!='x')
    {
        cout<<"Enter the operation to be performed (Enter x to exit) : \n";
        cin>>m;
        if(m=='x')
        break;
        cout<<"Enter the 2 numbers : ";
        cin>>a>>b;
        switch(m) {
            case '+' : 
            cout<<a+b;
            break;
            case '-' :
            cout<<a-b;
            break;
            case '*' :
            cout<<a*b;
            break;
            case '/' :
            cout<<float(a)/b;
            break;
        } 
        cout<<'\n';
    }
    cout<<"Thanks for Using and Have a Nice Day, Kind Sir";
}