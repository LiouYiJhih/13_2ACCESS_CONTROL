#include <iostream>
#include <cstring>
using namespace std;

class Reader
{
private:
    /* data */
    char name[10];
public:
    long index;

    char* get_name()
    {
        return name;
    }
    void set_name(char* i_name);
};
void Reader::set_name(char* i_name)
{
    strcpy(name, i_name);
}

int main()
{
    Reader A_Reader;
    char name[10];

    cout << "Please input your name.";
    cin >> name;
    // Because index is public, object can access index.
    A_Reader.index = 1;
    A_Reader.set_name(name);
    cout << "Your name is ";
    cout << A_Reader.get_name();
    cout << ".( index " << A_Reader.index;
    cout << " )" << endl;
    return 0;
}