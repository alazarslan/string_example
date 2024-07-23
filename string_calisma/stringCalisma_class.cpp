//
// Created by alaz on 23.07.2024.
//
#include <iostream>
#include <string>
#include "stringCalisma_class.h"
using namespace std;
void stringCalisma_class::stringAppend() {
    string str1 = "hello, ", str2 = "world";
    char ch1 = 'A';
    const char* cstr = "world!";    // cstr yani C style string
    //str1.append(str2); // OUTPUT:hello, world
    //str1.append(1, ch1); // OUTPUT: hello, A.
    //                      soldaki sayi kac tane ekleyecegini soyluyor.
    //                      15 yazarsam 15 tane A ekler.
    //str1.append(str2, 0, 3); // 0'dan baslayip str2'nin ilk 3 karakterini ekler.
                        // OUTPUT: hello, wor
    //str1.append(cstr);
    cout << str1;
}

void stringCalisma_class::stringAssign() {
    string str1, str2 = "hello, world!";
    char ch1 = '*';
    const char* cstr = "world!";
    str1.assign(str2); // OUTPUT: hello, world
    //str1.assign(10, ch1); // OUTPUT: **********
    //                      soldaki sayi kac tane ekleyecegini soyluyor.
    //                      15 yazarsam 15 tane * yazar.
    //str1.assign(str2, 0, 3); // 0'dan baslayip str2'nin ilk 3 karakterini ekler.
    // OUTPUT: hel
    //str1.assign(str2, 8); // 8. indexten sonuna kadar str2yi str1'e ekle.
    cout << str1;
}

void stringCalisma_class::stringBeginEnd() {
    string a = "en buyuk cimbom";
    std::string::iterator it = a.begin();
    while (*it != *a.end()) {
        cout << *it;
        ++it;
    }

    *a.begin() = 'i';
    cout << endl << a;
    // .begin() komutu stringin baslangicina isaret eden bir iterator atar.
    // .end() komutu ise stringin sonuna isaret eden bir iterator atar.
    // * koymadan iteratorlere erisemezsin
}

void stringCalisma_class::stringReverseBeginEnd() {
    string a = "en buyuk cimbom";
    std::string::reverse_iterator it = a.rbegin();
    // tersten yazar.
    while (*it != *a.rend()) {
        cout << *it;
        ++it;
    }
    // output: mobmic kuyub ne

    *a.rbegin() = 'i';
    cout << endl << a;
    // rbegin ve rend komutlari begin ve end'in tam tersi.
    // .rbegin() komutu stringin sonuna isaret eden bir iterator atar.
    // .rend() komutu ise stringin basina isaret eden bir iterator atar.
    // * koymadan iteratorlere erisemezsinvoid
}

void stringCalisma_class::stringCBeginCend() {
    string str = "en buyuk cimbombom";
    for (std::string::const_iterator it = str.cbegin(); it != str.cend(); ++it) {
        cout << *it; // Karakterleri ekrana yazdır
    }
    cout << endl;

    // const iteratorlar kullanarak string'in bazı karakterlerini okuma
    std::string::const_iterator beginIt = str.cbegin();
    std::string::const_iterator endIt = str.cend();

    // .cbegin() komutu stringin baslangicina isaret eden bir const iterator atar.
    // .cend() komutu ise stringin sonuna isaret eden bir const iterator atar.
    // * koymadan iteratorlere erisemezsin
    // bu const iteratorler sadece okuma yazma yapmak için kullanılır,
    // string üzerinde değişiklik yapmana izin vermez
}


