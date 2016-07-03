// Kütüphaneyi çağırıyoruz
#include <LiquidCrystal.h>

// Pinleri belirliyoruz.
#define RSpin         12
#define enablePin     11
#define D4pin         5
#define D5pin         4
#define D6pin         3
#define D7pin         2

// Pinleri kütüphaneye tanımlıyoruz.
LiquidCrystal lcd(RSpin, enablePin, D4pin, D5pin, D6pin, D7pin);

/*
 * Kalp Karakteri oluşturmak için kullanılan byte yapısı
 * 
  byte karakter[8] = {
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000,
        B00000
  };
*/

void setup() {

  lcd.begin(16, 2);                  // LCD'mizi başlatıyoruz.
  lcd.clear();                       // Ilk ekranımızı temizliyoruz.
  // lcd.createChar(1, karakter);    // Ekranda karakter göstermek istiyorsak bu tanımlamayı yapmamız gerekiyor.
                                     // İlk parametre hangi karakterden başlayacağınızı,
                                     // İkinci parametre ise karakterinizin byte tipinde formatını içerir.
}

void loop() {
  
  lcd.print("Merhaba Dünya!!");   // print() içerisine ekrana bastırmak istediğimiz yazıyı yazıyoruz.
  lcd.blink();                    // Yanıp sönün boşluk oluşturmamıza yarar.
    delay(1000);
    lcd.clear();
  lcd.cursor();                   // Alt-tire belirteci oluşturmamıza yarar.
    delay(1000);
    lcd.clear();
  lcd.noCursor();                 // Belirteci ekrandan kaldırır.
    delay(1000);
    lcd.clear();
  lcd.noDisplay();                // Ekranı kapatmamıza yarar.
    delay(1000);
    lcd.clear();
  lcd.display();                  // Tekrardan ekranı aktif eder.
    delay(1000);
    lcd.clear();
  // lcd.setCursor(0,1);          // Belirtecin pozisyonunu belirler.
  // lcd.write(1);                // Ekranıın yazılabilir olduğunu belirtiyoruz.
  lcd.home();                     // Belirteci ekranon sol üst köşesine götürür ve ekranı temizler.
  lcd.autoscroll();               // İfadenin ekranda kaymasını sağlar.
  lcd.noAutoscroll();             // Kayan ifadeyi durdurur.
  lcd.leftToRight();              // Yazıların Soldan Sağa doğru yazılmasını sağlar - Bu özellik varsayılan olarak bu şekildedir.
  lcd.rightToLeft();              // Yazıların Sağdan Sola doğru yazılmasını sağlar
  
}
