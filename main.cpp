#include <iostream>
#include <cstring>
using namespace std;
char print_in_hex(uint8_t symbol)
{
    char a;
    switch(symbol)
    {
    case 0:a='0';break;
    case 1:a='1';break;
    case 2:a='2';break;
    case 3:a='3';break;
    case 4:a='4';break;
    case 5:a='5';break;
    case 6:a='6';break;
    case 7:a='7';break;
    case 8:a='8';break;
    case 9:a='9';break;
    case 10:a='a';break;
    case 11:a='b';break;
    case 12:a='c';break;
    case 13:a='d';break;
    case 14:a='e';break;
    case 15:a='f';break;


    }
    return a;
}
void print_byte(uint8_t byte)
{
    uint8_t low =byte & 0b000001111;
    uint8_t high =(byte & 0b11110000)>>4;
    cout<<print_in_hex(high)<<print_in_hex(low);
}
void print_in_hex(const void* data, size_t size)
{
    size_t i;
   const uint8_t* p = reinterpret_cast<const uint8_t*>(data);
    for( i=0;i<size; i++)
    {
        print_byte(p[i]);
    }
}
struct student {
    char name[17];
    unsigned int year: 16;
    float ball;
    int sex: 1;
    int courses;
    student* batya;


};
int main()
{
    /*uint16_t u16;
    print_byte(u16);*/
    print_byte(255);
    student s[3];

    strcpy(s[0].name, "Ruslan");
    s[0].year = 2016;
    s[0].ball = 3.5;
    s[0].sex = 1;
    s[0].courses = 1;
    s[0].batya = &s[1];

    strcpy(s[1].name, "Andrey");
    s[1].year = 2016;
    s[1].ball = 4.5;
    s[1].sex = 1;
    s[1].courses = 1;
    s[1].batya = nullptr;

    strcpy(s[2].name, "Sergei");
    s[2].year = 2016;
    s[2].ball = 4.1;
    s[2].sex = 1;
    s[2].courses = 1;
    s[2].batya = &s[1];

    for (size_t i=0;i<3;i++) {
        cout <<'\n'<< s[i].name  << "\n";
        cout << s[i].year << "\n";
        cout << s[i].ball << "\n";
        cout << s[i].sex << "\n";
        cout << s[i].courses << "\n";
        cout << s[i].batya << "\n";
    }
    return 0;
}