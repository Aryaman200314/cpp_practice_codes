#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string, int> map1;
    map1["one"] = 1;
    map1["two"] = 2;

    //taking cout from the map using an iterator this is the most common way to take output from an map 

    map<string, int>::iterator name_of_iterator;

    for (name_of_iterator = map1.begin(); name_of_iterator != map1.end(); name_of_iterator++)
    {
        cout<<"key: " <<name_of_iterator->first << "value "<< name_of_iterator->second <<endl;
    }

//------------------------------------------------------------------

    for (name_of_iterator = map1.begin(); name_of_iterator != map1.end(); name_of_iterator++)
    {
        cout << "value "<< name_of_iterator->second <<endl;
    }

//------------------------------------------------------------------

    for (name_of_iterator = map1.begin(); name_of_iterator != map1.end(); name_of_iterator++)
    {
        cout<<"key: " <<name_of_iterator->first  <<endl;
    }

    return 0;
}