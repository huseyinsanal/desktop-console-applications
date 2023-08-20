// CalculatorTutorial.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include"Calculator.h"

using namespace std;

int main()
{
    
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';


    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format a+b | a-b | a*b | a/b"
         << endl;

    Calculator c ;

    while (true)
    {

        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "Result " << "of " << x << " " << oper << " " << y << " is " << result << endl;

    }

    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
