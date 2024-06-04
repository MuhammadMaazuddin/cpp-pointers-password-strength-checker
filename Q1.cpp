#include<iostream>
using namespace std;
bool insert( const char*  password)

{
    bool flag_4 = false; 
    bool flag_1 = false;
    bool flag_2 = false;
    bool flag_3 = false;

    int i=0;
    for( i=0;*(password+i)!='\0';i++)
    {
    }
        if(i<6)
        {
            cout<<"You have entered too short password\n";
        }


    for(int  j=0;*(password+j)!='\0';j++)
    {
        if(*(password+j)>=65&&*(password+j)<=90)
        {
            flag_1 = true;
           
        }
        else if(*(password+j)>=97&&*(password+j)<=122)
        {
            flag_2 = true;
            
        }
        else if(*(password+j)>='0' && *(password+j)<='9')
        {
            flag_3 = true;
           
        }
    }cout<<endl;

    if(flag_1 == true && flag_2 == true && flag_3 == true)
    {
        cout<<" --> you have entered correct password\n";
    }
    else
    {
        cout<<"incorrect ::---:: not according to the requirements \n";
    }
    if(flag_1 != true )
    {
        cout<<" --> uppercase letters missing\n";
    }
    if(flag_2 != true)
    {
        cout<<" --> lowercase letters missing\n";
    }
    if(flag_3 != true)
    {
        cout<<" --> Digit  missing\n";
    }
    cout<<"______________________\n";
    cout<<"______________________\n";
return flag_4;
}
int main()
{
    //allocating memory to the char ptr
    char*  const password = new char;
    cout<<"______________________\n";
    cout<<"[ ENTER THE PASSWORD ] ===\t";
    //Taking input from user 
    cin>>password;
    cout<<"______________________\n";
    //passing arguments to the funtion having const char *ptr
    insert(password);
    // deallocating memory
    delete []password;
    return 0;
}