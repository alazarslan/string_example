//
// Created by alaz on 23.07.2024.
//

#ifndef STRINGCALISMA_CLASS_H
#define STRINGCALISMA_CLASS_H



class stringCalisma_class {
public:
    /*
     * @brief: append komutu stringin sonuna yeni bir string veya char ekler.
     */
    void stringAppend();

    /*
     * @brief: assign komutu stringin yerine iceri konulan
     * bir diger stringi veya chari ekler.
     * mevcut stringin icerigini degistirme.
     */
    void stringAssign();

    /*
     * @brief: .begin() ve .end() komutlari stringin baslangicina
     * veya sonuna erisilmesini saglayan iterator atarlar.
     * iterator ya da '*'(pointerdeki gibi) kullanmadan erisemezsin
     */
    void stringBeginEnd();

    /*
    * @brief: .rbegin() ve .rend() komutlari stringin baslangicina
    * veya sonuna erisilmesini saglayan iterator atarlar.
    * iterator ya da '*'(pointerdeki gibi) kullanmadan erisemezsin
    */
    void stringReverseBeginEnd();

    /*
    * @brief: .cbegin() ve .cend() komutlari stringin baslangicina
    * veya sonuna erisilmesini saglayan const iterator atarlar.
    * iterator ya da '*'(pointerdeki gibi) kullanmadan erisemezsin
    * const iteratorler üzerinden stringde değişiklik yapamazsın.
    */
    void stringCBeginCend();
// char c = str.at(0); 0'ıncı indexte ne varsa onu char olarak verir

// char lastCh = str.back(); str'ın son indexinde karakteri verir.

// const char* cstr = str.c_str();  str'yi C-string'e yani
//                                  C style stringe dönüstürür. C-stringler'in
//                                  sonunda \0 yani null karakter vardır.

// str.capacity(); stringi depolamak icin verilmis hafiza buyuklugunu verir.
// 15 karakterden az stringler icin kapasite 15'tir, 15'ten sonra uzunlugu kadar
//   kapasite verir.

// str.reserve(num); stringi depolamak icin verilen hafizayi degistirir,
// iceriye 100 yazarsam kapasitesi 100 olur. halihazirda verilen hafizadan
// düşük bir hafıza vermeye çalışırsan bir şey değişmez.

// str.clear(); stringin içeriğini temizler ve uzunluğunu 0 yapar.

};



#endif //STRINGCALISMA_CLASS_H
