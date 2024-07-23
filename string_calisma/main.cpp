#include <iostream>
#include <iterator>
#include "stringCalisma_class.h"
// <<>>
// c++ stringlerinde .back() komutu ne yapar, nasıl kullanılır
using namespace std;
int main() {
    stringCalisma_class *myVar = new stringCalisma_class;
    //myVar->stringAppend();
    //myVar->stringAssign();
    //myVar->stringBeginEnd();
    //myVar->stringReverseBeginEnd();
    string a = "en buyuk cimbomm";
    string str1 = "claz", str2 = "bessi";
    int result1 = str1.compare(str2);
    cout << result1;
    return 0;
}
