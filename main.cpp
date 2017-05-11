#include <iostream>
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

int main()
{
    /*uint16_t u16;
    print_byte(u16);*/
    print_byte(255);

    return 0;
}