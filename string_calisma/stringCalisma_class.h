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
    void stringConstBeginEnd_withReverse();

    /*
    * @brief: iki stringi karşılaştırır, verdiği sonuca göre(-1,0,1) hangi stringin
     * küçük hangi stringin büyük olduğu anlaşılır
    */
    void stringCompare();

    /*
    * @brief: bir stringin belli bir kısmını(kullanıcı nasıl isterse) char pointer veya char array'e kopyalar
    */
    void stringCopy();

    /*
    * @brief: bir stringin içinde parametreye girilen karakteri veya kelimeyi arar.
    */
    void stringFind();

    /*
    * @brief: bir stringin içinde parametreye girilen karakteri veya tersten arar
    */
    void stringFind_of();

    void stringInsert();

    void stringResize();

/* char c = str.at(0); 0'ıncı indexte ne varsa onu char olarak verir

/* char lastCh = str.back(); str'ın son indexinde karakteri verir.

/* const char* cstr = str.c_str();  str'yi C-string'e yani C style stringe dönüstürür. C-stringler'in
//                                  sonunda \0 yani null karakter vardır.
//                                  NOT: const olmak zorunda!!! -> const char*
//                                  bundan dolayı cstr variablesinin üstünde değişiklik yapamazsın çünkü const!

/* str.capacity(); stringi depolamak icin verilmis hafiza buyuklugunu verir.
// 15 karakterden az stringler icin kapasite 15'tir, 15'ten sonra uzunlugu kadar
//   kapasite verir.

/* str.reserve(num); stringi depolamak icin verilen hafizayi degistirir,
// iceriye 100 yazarsam kapasitesi 100 olur. halihazirda verilen hafizadan
// düşük bir hafıza vermeye çalışırsan bir şey değişmez.

/* str.clear(); stringin içeriğini temizler ve uzunluğunu 0 yapar.

/* str.data(); -- str.c_str(); komutuyla aynı işleve sahip, tek farkı const char yazmadan da kullanabiliyorum
// char* cstr = str.data(); dediğimde cstr'ı değiştirebilirim -> cstr[0] = 'm' yazabilirim, const koymadığım için
//                             const koyup da yazabilirim.

/* str.empty(); -> boolean değer döner, string boşsa 1 yani true, değilse 0 yani false.
//                 bu fonksiyon direkt size() 0'a eşit mi diye bakmakla aynı şeyi yapıyo, sadece daha okunaklı
//       GPT ->    empty() fonksiyonu noexcept özelliğine sahiptir, yani herhangi bir istisna fırlatmaz
//                 ve bu nedenle performans açısından da güvenilirdir.

/* str.erase(7, 5); -> 7.indexten itibaren 5 karakteri sil
// str.erase(str.begin()); -> iterator kullanarak sadece ilk karakteri siliyo
// str.erase(str.begin() + 7, str.begin() + 12); -> iteratorler 7-11 arasındaki bütün karakterleri sil (7-11 dahil)
//    erase() fonksiyonu, silinen karakterlerden sonra gelen karakterlerin yerini değiştireceği için,
//    silme işlemi sonrasında iteratorlar geçersiz hale gelebilir.
//    Eğer erase() fonksiyonuna geçerli olmayan bir pozisyon veya aralık verilirse,
//    std::out_of_range istisnası fırlatılabilir.
//    erase() fonksiyonu, silme işlemi tamamlandıktan sonra string'in kendisine (referans olarak) döner,
//    bu da zincirleme işlemler yapmayı mümkün kılar. -> str.erase(str.begin()).erase(str.end() - 1); -> ilk ve son karakteri sil

/*
// char firstCh = str.front(); -> stringin ilk karakterini char olarak verir.
// str.front() = 'j'; -> yaparak stringin ilk karakteri değiştirilebilir çünkü front() fonksiyonu referans olarak döner.

/*
// str.length(); -> uzunluğunu dönüyo

/*
// str.max_size(); -> string'in alabileceği maksimum karakter sayısını ekrana yazdırır. Çıktı, kullanılan platforma ve derleyiciye bağlı olarak değişebilir.

/*
// string operetor[] -> char ch = str[0] -> 0. indexte hangi karakter varsa onu char type'ta verir. referans döner, yani
//                                          str[0] = 'g' yapılabilir

/*
// string operator+= -> str1 += str2; -> str1 = str1 + str2 -> iki stringi birbirine sondan ekler
// str1 = "john", str2 = " adam" -> str1 += str2 -> str1 = "john adam"

/*
// string operator= -> str1 = str2; -> str2'yi str1'e assignlar, yani str1 ile str2 aynı şeyi yazar
// str1 = "john", str2 = " adam" -> str1 = str2 -> str1 = "adam"

/*
// string pop_back
// str = "hello world"
// str.pop_back() -> output: hello worl
// pop_back sondan 1 karakter siler, uzunluğunu 1 düşürür

/*
// string push_back
// str = "hello world"
// str.push_back('!') -> output: hello world!
// push_back sona 1 karakter ekler, uzunluğunu 1 artırır.
*/



};



#endif //STRINGCALISMA_CLASS_H
