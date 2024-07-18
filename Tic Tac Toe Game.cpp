#include <iostream>
using namespace std;

//Made with love by Prime :)

bool check(char a[][3], char z)
{
    bool ans = false;
    for(int i=0;i<3;i++)
    {
        bool t = true;
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=z)
            t = false;
        }
        if(t)
        return true;
    }

    for(int i=0;i<3;i++)
    {
        bool t = true;
        for(int j=0;j<3;j++)
        {
            if(a[j][i]!=z)
            t = false;
        }
        if(t)
        return true;
    }
    if((a[0][0]==z)&&(a[1][1]==z)&&(a[2][2]==z))
    return true;
    if((a[0][2]==z)&&(a[1][1]==z)&&(a[2][0]==z))
    return true;
    return false;
}

int main()
{
    cout<<"Welcome To Our Tick Tack Toe Game, Esteemed Guest (^_^)\n\n";
    bool finalisation = false;
    char a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j] = '.';
        }
    }
    cout<<"Player 1 should use X and Player 2 should use O\n\n";
    int  p = 1;
    while(!finalisation)
    {
        cout<<"Player "<<p<<" Turn :\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<' ';
            }
            cout<<'\n';
        }
        cout<<"Enter your move (Row-Column) :  \n";
        int i,j;
        cin>>i>>j;
        cout<<'\n';
        i--; j--;
        (p==1)?(a[i][j]='X'):(a[i][j]='O');
        char z = (p==1)?'X':'O';
        if(check(a,z))
        break;
        if(p==1)
        p = 2;
        else
        p = 1;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<"\nPlayer "<<p<<" Won !!";
}