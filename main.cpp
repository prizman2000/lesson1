#include <iostream>
#include <string>
#include <math.h>
#include <fstream>


using namespace std;

const int N=300;

struct TLong{

    bool sign;
    int mass[N];
};

void Read_TLong(FILE *f1, TLong &A){

    int*p = &A.mass[0];
    for(int i = 0; i < 300; i++) {
        *p++ = 0x00000000;
    }

    while(!f1.eof()) {

        for (int i = 0; getline(f1, a); i++) {
            string peace, a;
            if (isdigit(a[0])) {
                A.sign = true;
                for (int i = 0; a != ""; i++) {
                    unsigned long len = a.length();
                    if (len >= 4) {
                        peace = a.substr(len - 4, len);
                        A.mass[i] = atoi(peace.c_str());
                        a.erase(len - 4, len);
                    } else {
                        A.mass[i] = atoi(a.c_str());
                        a = "";
                    }
                }
            } else {
                if (a == "+") {
                    A.sign = true;
                }
            }
        }
    }
}

void Write_TLong(TLong A){


}

TLong sum(TLong A, TLong B){

}

TLong sub(TLong A, TLong B){

}

bool Less(TLong A, TLong B){

}

int main(){

    FILE *f1= fopen("/Users/apple/CLionProjects/untitled13/f1.txt","r");
    TLong number1;
    int* p;
    TLong number2;
            Read_TLong(f1, number1);

    return 0;
}