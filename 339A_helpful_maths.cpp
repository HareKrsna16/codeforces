#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int one=0, two=0, three=0;
    for (int i=0;i<s.length();i+=2){
        int num = s[i] - '0';
        if(num == 1)
            ++one;
        else if (num == 2)
            ++two;
        else if (num == 3)
            ++three;
    }
    std::string newstring;
    for (int i=0; i<one;i++)
        newstring += "1+";
    for (int i=0; i<two; i++)
        newstring += "2+";
    for (int i=0; i<three; i++)
        newstring += "3+";
    std::cout << newstring.substr(0, newstring.length()-1);
}
