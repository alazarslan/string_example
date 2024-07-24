//
// Created by alaz on 23.07.2024.
//
#include <iostream>
#include <string>
#include "stringCalisma_class.h"
#include <vector>
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
    vector<int> v1;
    v1 = {9,2,6,4,5};
    cout << *v1.begin() << endl << *v1.rend() << endl;
    while (*it != *a.rend()) {
        cout << *it << '\n';
        ++it;
    }
    // output: mobmic kuyub ne

    *a.rbegin() = 'i';
    cout << endl << a << " rend: " << *a.rend() << " end: " << *a.end();
    // rbegin ve rend komutlari begin ve end'in tam tersi.
    // .rbegin() komutu stringin sonuna isaret eden bir iterator atar.
    // .rend() komutu ise stringin basina isaret eden bir iterator atar.
    // * koymadan iteratorlere erisemezsinvoid
}

void stringCalisma_class::stringConstBeginEnd_withReverse() {
    string str = "en buyuk cimbombom";
    // const_iterator!!
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

    string rev_str = "galatasaray";
    // const_reverse_iterator!!!
    for (std::string::const_reverse_iterator it = rev_str.crbegin(); it != rev_str.crend(); ++it) {
        cout << *it; // Karakterleri ekrana yazdır
    }
    cout << endl;
}

void stringCalisma_class::stringCompare() {
    string str1 = "hello";
    string str2 = "world";

    int result = str1.compare(str2);
    cout << result << endl;

    // str1'in ilk 4 karakteri ile str2'nin tamamını karşılaştır
    result = str1.compare(0, 4, str2);

    // str1'in 1. karakterinden başlayarak 3 karakteri ile str2'nin 1. karakterinden başlayarak 3 karakteri karşılaştır
    result = str1.compare(1, 3, str2, 1, 3);

    // result:
    // 0'sa stringler aynı
    // -1'se *this(str1) str2'den küçük
    // 1'se str2 str1'den büyük
}

void stringCalisma_class::stringCopy() {

    // size_t copy(char* dest, size_t count, size_t pos = 0) const;
    // ilk parametre char array veya char pointer alıyo, sonuna '\0' eklersem C-style string oluyomuş

    string str = "Hello, World!";
    // char arrayin ya da pointerin büyüklüğü doğru olmazsa(kopyalanan şeyden küçük olursa) hata oluyor, program crash
    char buffer[6]; // 5 karakter + null terminator

    // İlk 5 karakteri kopyalar
    str.copy(buffer, 5, 0);

    // 7. pozisyondan (indeks 6) başlayarak 5 karakteri kopyalar
    //str.copy(buffer, 5, 7);

    // Null terminator ekleyelim (ZORUNLU DEĞİL)
    buffer[5] = '\0';

    cout << "Buffer: " << buffer << endl; // Çıktı: Hello
}

void stringCalisma_class::stringFind() {
    string str = "Hello, World!";
    int pos = str.find("World!", 0, 5); // "World!" içindeki ilk 5 karakteri ara

    string str2 = "Hello, World! Hello, Universe!";
    int pos2 = str2.find("Hello", 10);     // 10. indexten sonraki ilk "Hello"yu ara
    // int pos = str.find("World");                bu da tüm stringde "World"ü arar.

    if (pos != std::string::npos) {
        cout << "\"World\" found at position: " << pos << endl;
    } else {
        cout << "\"World\" not found." << endl;
    }

    /*
     * find() fonksiyonu, belirtilen karakter veya alt string'in ilk geçtiği konumun indeksini döner.
     * Eğer aranan karakter veya alt string bulunamazsa, std::string::npos döner, bu da genellikle -1 olarak değerlendirilir.
     * find() fonksiyonu, aramaya başlamak için bir başlangıç pozisyonu (opsiyonel olarak) alabilir.
     * Bu, belirli bir pozisyondan sonra arama yapmak için kullanışlıdır.
     */
}

void stringCalisma_class::stringFind_of() {
    // find_first_not_of() -> Bu fonksiyon, belirtilen karakter kümesinde bulunmayan ilk karakterin konumunu döner.
    string str = "abcde12345";
    int pos = str.find_first_not_of("abcde");

    if (pos != string::npos) {
        cout << "First character not in 'abcde' found at position: " << pos << endl;
    } else {
        cout << "No character found." << endl;
    }

    // find_first_of() -> Bu fonksiyon, belirtilen karakter kümesinde bulunan ilk karakterin konumunu döner.
    str = "abcde12345";
    pos = str.find_first_of("12345");

    if (pos != string::npos) {
        cout << "First character in '12345' found at position: " << pos << endl;
    } else {
        cout << "No character found." << endl;
    }

    // find_last_not_of() -> Bu fonksiyon, belirtilen karakter kümesinde bulunmayan son karakterin konumunu döner. Tersten başlar, 12-11-10...
    str = "abcde12345";
    pos = str.find_last_not_of("abcde");

    if (pos != string::npos) {
        cout << "Last  character not in 'abcde' found at position: " << pos << endl;
    } else {
        cout << "No character found." << endl;
    }

    // find_last_of() -> Bu fonksiyon, belirtilen karakter kümesinde bulunan son karakterin konumunu döner. Tersten başlar, 12-11-10...
    str = "abcde12345";
    pos = str.find_last_of("abcde");

    if (pos != string::npos) {
        cout << "Last character in 'abcde' found at position: " << pos << endl;
    } else {
        cout << "No character found." << endl;
    }
}

void stringCalisma_class::stringInsert() {
    string str="to be question";
    string str2="the ";
    string str3="or not to be";
    string::iterator it;

    // used in the same order as described above:

    str.insert(6,str2);                         // to be (the )question
    cout << str << '\n';
    str.insert(6,str3,3,4);             // to be (not )the question, sağdaki parametreler str3 için. 3. indexten 4 karakter
    cout << str << '\n';
    str.insert(10,"that is cool",8);           // to be not (that is )the question
    cout << str << '\n';
    str.insert(10,"to be ");                      // to be not (to be )that is the question
    cout << str << '\n';
    str.insert(15,1,':');                      // to be not to be(:) that is the question
    cout << str << '\n';
    it = str.insert(str.begin()+5,',');             // to be(,) not to be: that is the question
    cout << str << '\n';
    str.insert (str.end(),3,'.');                // to be, not to be: that is the question(...)
    cout << str << '\n';
    str.insert (it+2,str3.begin(),str3.begin()+3); // (or )
    cout << str << '\n';
}

void stringCalisma_class::stringResize() {
    string str ("I like to code in C");
    cout << str << '\n';

    int sz = str.size();

    str.resize (sz+2,'+');
    cout << (str) << '\n';

    str.resize (14);
    cout << str << '\n';

    str.resize (26,'*');
    cout << str << '\n';

    // parametreye girilen değere göre stringin uzunluğunu değiştiriyo,
    // girilen değer küçükse, parametreye girilen karakter sonrası silinir
    // büyükse, parametreye ikinci bir değer girilmediyse null character ile stringi uzatır,
    // girildiyse girilen karakterle uzatır.
}

void stringCalisma_class::stringReplace() {
    string str = "Merhaba, dünya!";
    string newStr = "kainat";
    // 8. pozisyondan başlayarak 5 karakteri "evren" ile değiştir
    str.replace(8, 5, newStr);
    cout << "Yeni string: " << str << endl;

    str = "Merhaba, dünya!";
    // 8. pozisyondan başlayarak 5 karakteri "evren" ile değiştir
    str.replace(8, 5, "evren");
    cout << "Yeni string: " << str << endl;

    str = "Merhaba, dünya!";
    // 8. pozisyondan başlayarak 5 karakteri "evreninde" karakter dizisindeki
    // ilk 5 karakterle değiştir
    str.replace(8, 5, "evreninde", 5);
    cout << "Yeni string: " << str << endl;

    str = "Merhaba, dünya!";
    newStr = "kainat";
    // 8. pozisyondan başlayarak 5 karakteri newStr stringindeki ilk 3 karakterle değiştir
    str.replace(8, 5, newStr, 0, 3);
    cout << "Yeni string: " << str << endl;

    str = "Merhaba, dünya!";
    newStr = "galaksi";
    // 8. pozisyondan itibaren 5 karakteri newStr'in tamamıyla değiştir
    str.replace(str.begin() + 8, str.begin() + 13,
        newStr.begin(), newStr.end());
    cout << "Yeni string: " << str << endl;
}

void stringCalisma_class::stringShrinkToFit() {
    string str = "Merhaba, dünya!";

    // String'in başlangıç kapasitesini yazdır
    cout << "Başlangıç kapasitesi: " << str.capacity() << endl;

    // String'e bazı karakterler ekleyin
    str.reserve(50); // Kapasiteyi artır
    cout << "Yeni kapasite (reserve sonrası): " << str.capacity() << endl;

    // String'in boyutunu küçültmeden önce kapasiteyi kontrol et
    str.shrink_to_fit();
    cout << "Kapasite (shrink_to_fit sonrası): " << str.capacity() << endl;
}

void stringCalisma_class::stringSubStr() {
    string str = "Merhaba, dünya!";

    // Başlangıç konumundan itibaren alt dize
    string substr1 = str.substr(8);
    cout << "Alt dize (8. pozisyondan itibaren): " << substr1 << endl;

    // Başlangıç konumu ve uzunluğu belirterek alt dize
    string substr2 = str.substr(8, 5);
    cout << "Alt dize (8. pozisyondan itibaren 5 karakter): " << substr2 << endl;
}

void stringCalisma_class::stringSwap() {
    string str1 = "Hello";
    string str2 = "World";

    cout << "Önce:\n";
    cout << "str1: " << str1 << "\n";
    cout << "str2: " << str2 << "\n";

    // str1 ve str2 string'lerinin içeriklerini değiştir
    str1.swap(str2);

    cout << "Sonra:\n";
    cout << "str1: " << str1 << "\n";
    cout << "str2: " << str2 << "\n";
}



