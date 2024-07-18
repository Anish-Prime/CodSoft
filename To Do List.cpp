#include <iostream>
#include <list>
#include <cstring>
using namespace std;

//Made with love by Prime :)

int main()
{
    string temp = "";
    list<string> tasks;
    cout<<"Welcome Dear User (^_^)\n";
    while(temp!="X")
    {
        int i = 1;
        cout<<"\nTo Do List :\n";
        for(string t : tasks)
        {
            cout<<i<<".) "<<t<<'\n';
            i++;
        }
        int s = 5;
        cout<<"\nWhat would you like to do?\n";
        cout<<"-> Enter 1 to add new task\n-> Enter 2 to delete a task\n-> Enter 0 to exit\n\n";
        cin>>s;
        switch (s)
        {
        case (1) :
            cout<<"\nEnter the task : \n";
            cin>>ws;
            getline(cin,temp);
            tasks.push_back(temp);
            break;
        
        case (2) :
            {    
            cout<<"Which task (S.No.) would you like being cleared?\n";
            int k;
            cin>>k;
            list<string>::iterator z = tasks.begin();
            advance(z,k-1);
            tasks.erase(z);
            break;
            }
        default :
            temp = "X";
        }
    }
}